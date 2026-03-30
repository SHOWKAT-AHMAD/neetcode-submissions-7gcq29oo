class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> freq(26,0);
        for(int i=0;i<s.size();i++){
                char c=s[i];
                char c2=t[i];
                freq[c-'a']++;
                freq[c2-'a']--;
        }
        for(int j=0;j<26;j++){
            if(freq[j] != 0) return false;
        }
        return true;
    }
};
