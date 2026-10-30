#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& nums){
    for(int i=0;i<nums.size();i++){
        int cnt=0;
        for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
        if(cnt>nums.size()/2){
            return nums[i];
        }
    }
    return -1;
}
int main(){
    vector<int> nums={2,5,6,7,7,6,7,2,7,7,7,7,7};
    cout << majorityElement(nums);
    return 0;
}