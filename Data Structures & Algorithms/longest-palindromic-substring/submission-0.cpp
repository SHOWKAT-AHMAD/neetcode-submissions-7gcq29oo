class Solution {
    private:
        void findLongest(int l,int r,string s){
            while(l<=r && l >=0 && r <s.length() && s[l] == s[r]){
                if(r-l+1 >= result.length()){
                    result=s.substr(l,r-l+1);
                }
                l--;
                r++;
            }
            return;
        };
public:
    string result="";
    string longestPalindrome(string s) {
        int n=s.length();

        for(int i=0;i<n;i++){
            findLongest(i,i,s);
            if(i<n-1){
            findLongest(i,i+1,s);
            }

        }
    return result;
    }
};
