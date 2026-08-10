#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

#define PI 3.14159265358979323846

#include "olcNoiseMaker.h"

// Convert Hertz to angular velocity
double w(double dHertz){
    return dHertz * 2.0 * PI;
}

// Oscillator
double osc(double dHertz, double dTime, int nType){
    switch(nType){

        // Sine Wave
        case 0:
            return sin(w(dHertz) * dTime);

        // Square Wave
        case 1:
            return sin(w(dHertz) * dTime) > 0.0 ? 1.0 : -1.0;

        // Triangle Wave
        case 2:
            return asin(sin(w(dHertz) * dTime)) * (2.0 / PI);

        // Saw Wave (Fourier Approximation)
        case 3:
        {
            double dOutput = 0.0;
            for(double n = 1.0; n < 100.0; n++){
                dOutput += (sin(n * w(dHertz) * dTime)) / n;
            }
            return dOutput * (2.0 / PI);
        }

        // Saw Wave (Direct Formula)
        case 4:
            return (2.0 / PI) * 
                   (dHertz * PI * fmod(dTime, 1.0 / dHertz) - (PI / 2.0));

        // Noise
        case 5:
            return 2.0 * ((double)rand() / (double)RAND_MAX) - 1.0;

        default:
            return 0.0;
    }
}


// ============================
// ADSR Envelope Structure
// ============================

struct sEnvelopeADSR
{
    double dAttackTime  = 0.01;
    double dDecayTime   = 0.01;
    double dReleaseTime = 0.01;

    double dSustainAmplitude = 1.0;
    double dStartAmplitude   = 1.0;

    double dTriggerOnTime  = 0.0;
    double dTriggerOffTime = 0.0;

    bool bNoteOn = false;

    void NoteOn(double dTimeOn){
        dTriggerOnTime = dTimeOn;
        bNoteOn = true;
    }

    void NoteOff(double dTimeOff){
        dTriggerOffTime = dTimeOff;
        bNoteOn = false;
    }

    double GetAmplitude(double dTime){

        double dAmplitude = 0.0;
        double dLifeTime  = dTime - dTriggerOnTime;

        if(bNoteOn){
            // Attack Phase
            if(dLifeTime <= dAttackTime){
                dAmplitude = (dLifeTime / dAttackTime) * dStartAmplitude;
            }
            // Decay Phase
            else if(dLifeTime <= (dAttackTime + dDecayTime)){
                dAmplitude =
                    ((dLifeTime - dAttackTime) / dDecayTime) *
                    (dSustainAmplitude - dStartAmplitude) +
                    dStartAmplitude;
            }
            // Sustain Phase
            else{
                dAmplitude = dSustainAmplitude;
            }
        }
        else{
            // Release Phase
            double dReleaseLifeTime = dTime - dTriggerOffTime;

            if(dReleaseLifeTime <= dReleaseTime){
                dAmplitude =
                    ((dReleaseLifeTime) / dReleaseTime) *
                    (-dSustainAmplitude) +
                    dSustainAmplitude;
            }
            else{
                dAmplitude = 0.0;
            }
        }

        return dAmplitude;
    }
};