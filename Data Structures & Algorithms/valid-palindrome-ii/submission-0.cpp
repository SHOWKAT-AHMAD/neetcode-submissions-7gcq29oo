class Solution {
    private:
    bool ispalindrome(string s,int l,int r){
        while(l<=r){
        if(s[l] != s[r]) return false;
        l++;
        r--;
        }
        return true;
            
    }
public:
    bool validPalindrome(string s) {
        int l=0, r=s.size()-1;

        while(l<=r){
            if(s[l] != s[r]){
                return ispalindrome(s,l,r-1) || ispalindrome(s,l+1,r);
            }
            l++;
            r--;
        }
        return true;
    }
};