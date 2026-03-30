class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        unordered_map<string,vector<string>> strmap;
        for(auto s:strs){
            vector<int> freq(26,0);
            for(char c:s){
                freq[c-'a']++;
            }
            string result="";
            for(int i=0;i<26;i++){
                result=result+to_string(freq[i])+"#";
            }
            strmap[result].push_back(s);
        }
        for(auto m:strmap){
            ans.push_back(m.second);
        }
        return ans;
    }
};
