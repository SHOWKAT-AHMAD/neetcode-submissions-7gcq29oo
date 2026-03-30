class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        string prefix=strs[0];
        for(auto word:strs){
            int i=0;
            while(i<min(prefix.size(),word.size())){
                if(prefix[i] != word[i]){
                    prefix=prefix.substr(0,i);
                    break;
                } 
                i++;   
            }
            prefix=prefix.substr(0,i);
            if(prefix.empty()) return "";
        }
        return prefix;
    }
};