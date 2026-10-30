class Solution {
public:
    int titleToNumber(string columnTitle) {
       int ans=0;
       for(auto c:columnTitle) {
        int x=c-'A'+1;
        ans=ans*26+x;
       }
       return ans;
        
    }
};

int main() {
    Solution s;
    string columnTitle = "AB";
    int result = s.titleToNumber(columnTitle);
    cout << "The column number for " << columnTitle << " is: " << result << endl;
    return 0;
}