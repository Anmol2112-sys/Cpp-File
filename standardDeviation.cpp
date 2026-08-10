#include<iostream>
#include<vector>
#include<cmath>
using namespace std;

double standardDeviation(vector<int> &arr){
    int n=arr.size();
    double sum=0;
    for(int x:arr)
        sum+=x;

        double mean=sum/n;
        double variance=0;
        for(int x:arr)
            variance += (x-mean)*(x-mean);
        
        variance /= n;
        return sqrt(variance);
    
}
int main(){
    vector<int> arr={10,12,23,23,16,23,21,16};
    cout<<"Standard Deviation: "<<standardDeviation(arr)<<endl;
    return 0;
}