class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m=s.length();
        int n=t.length();
        if(n<m) return false;
        if(s == "") return true;
        int j=0;
        for(int i=0;i<n;i++){
            if(s[j] == t[i]){
                j++;
                if(j == m) return true;
            }
        }
        return false;
    }
};