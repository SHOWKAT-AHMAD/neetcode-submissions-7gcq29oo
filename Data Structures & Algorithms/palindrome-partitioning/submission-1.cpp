class Solution {
    vector<vector<string>> res;
    private:
    bool ispalindrome(string s,int l,int r){
        
        while(l < r){
            if(s[l] != s[r]) return false;
            l++;
            r--;
        }
        return true;
    }
    void backtrack(string s,vector<string>& temp,int start){
        if(start == s.length()){
            res.push_back(temp);
            return;
        }

        for(int i=start;i<s.length();i++){
            if(ispalindrome(s,start,i)){
            temp.push_back(s.substr(start,i-start+1));
            backtrack(s,temp,i+1);
            temp.pop_back();
            }
        }
        return;
    }
public:
    vector<vector<string>> partition(string s) {
        vector<string> temp;
        backtrack(s,temp,0);
        return res;
    }
};
