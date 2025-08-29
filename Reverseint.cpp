class Solution {
public:
    int reverse(int x) {
      long  int num=x;
      long  int rev=0,rem;
        while(num!=0){
            rem=num%10;
            rev=(rev*10)+rem;
            num=num/10;
            if(rev>INT_MAX || rev<INT_MIN){
                return 0;
            }
        }
       return rev; 
    }
};