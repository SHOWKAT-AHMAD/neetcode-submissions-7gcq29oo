class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        unordered_map<char,int> charmap;
        int longest=1;
        int l=0,r=0;
        while(r<=s.length()-1){
            char curr=s[r];
            if(charmap.count(curr) && charmap[curr] >=l){
                l=charmap[curr]+1;
            }
            charmap[curr]=r;
            longest=max(longest,r-l+1);
            r++;
        }
        return longest;
    }
};
