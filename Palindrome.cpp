class Solution {
public:
    bool isPalindrome(int x) {
        long long num= x;
        long long rem,rev=0;
        while(num>0){
            rem=num%10;
            rev=rev*10+rem;
            num=num/10;
        }
        if(x==rev){
            return true;

        }
        else{
            return false;
        }
        
    }
};