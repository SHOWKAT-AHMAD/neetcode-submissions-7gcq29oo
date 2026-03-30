class Solution {
public:
    string minWindow(string s, string t) {
        if(t.empty()) return "";
        unordered_map<char,int> mp;
        for(auto c:t){
            mp[c]++;
        }
        int unique=mp.size();
        int create=0,l=0,r=0;
        int reslen=INT_MAX;
        pair<int,int> res={-1,-1};
        unordered_map<char,int> mp2;
        while(r<s.length()){
            int ch=s[r];
            mp2[ch]++;
            if(mp.count(ch) && mp2[ch]==mp[ch]){
                create++;
            }
            while(l<= r && unique == create){
                if((r-l+1)<reslen){
                   reslen=r-l+1;
                   res={l,r};

                }
                mp2[s[l]]--;
                if(mp.count(s[l]) && mp2[s[l]]<mp[s[l]]){
                    create--;
                }
                l++;
            }
    r++;
        }
        return reslen== INT_MAX?"":s.substr(res.first,reslen);
    }
};
