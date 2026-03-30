class Solution {
    void countpalindrome(int l,int r,string s){
        while(l<=r && l >=0 && r <s.length() && s[l] == s[r]){
            result++;
            l--;
            r++;
        }
        return;
    }
public:
    int result=0;
    int countSubstrings(string s) {
        int n=s.length();
        
        for(int i=0;i<n;i++){
            countpalindrome(i,i,s);
            if(i<n-1){
                countpalindrome(i,i+1,s);
            }
        }
        return result;
    }
};
