class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> charmp;
        int l=0, r=0;
        int longest=0;
        int maxfreq=0;
        while(r<s.length()){
                charmp[s[r]]++;
                maxfreq=max(maxfreq,charmp[s[r]]);
                while(r-l+1 - maxfreq >k){
                    charmp[s[l]]--;
                    l++;
                }
                longest=max(longest,r-l+1);
                r++;
        }
        return longest;
    }
};
