class Solution {
    vector<string> res;
    private:
    void backtrack(int n, string ans,int open,int close){
        if(ans.length() == 2*n){
            res.push_back(ans);
            return;
        }
        if(open < n){
            backtrack(n,ans+'(',open+1,close);
        }
        if(close<open){
            backtrack(n,ans+')',open,close+1);
        }
    }
public:
    vector<string> generateParenthesis(int n) {
        backtrack(n,"",0,0);
        return res;
    }
};
