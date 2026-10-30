#include<iostream>
using namespace std;
class Line{
    public:
    double Length;
    void setlength(double len);
    double getLength(void);
};

void Line::setlength(double len){
    Length = len;
}

double Line::getLength(void){
    return Length;
}

int main(){
    Line line;
    line.setlength(6.0);
    cout << "Length of line : " << line.getLength() << endl;
    return 0;
}

