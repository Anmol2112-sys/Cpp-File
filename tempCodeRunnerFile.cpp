#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> arr = {1,2,3,4,5,8};
    int target = 3;
    int st = 0;
    int end = arr.size();
    int mid = st + (end-st)/2;
while(st>end)
{
    int mid = st + (end-st)/2;

    if(target <arr[mid])
    {
        end = mid-1;
        st=0;
       
    }
    else if(target>arr[mid])
    {
        st = mid +1;
        
    }
    else if(target== arr[mid])
    {
        return true;
    }
    else
    {
        return false;
    }
     st++;
     
}
}