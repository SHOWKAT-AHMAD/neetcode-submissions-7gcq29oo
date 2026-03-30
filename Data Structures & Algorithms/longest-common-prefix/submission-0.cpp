class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string prefix=strs[0];
        for(auto word:strs){
            for(int i=0;i<prefix.size();i++){
                if(prefix[i] != word[i]){
                    prefix=prefix.substr(0,i);
                    break;
                }
                if(prefix.empty()) return "";
            }
        }
        return prefix;
    }
};