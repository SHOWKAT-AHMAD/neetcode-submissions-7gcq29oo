class Solution {
    private:
    void backtrack(vector<int>& candidates,int target,int start,vector<vector<int>>& res,vector<int>& comb){
        if(target==0){
            res.push_back(comb);
            return;
        }
        if(target < 0 || start == candidates.size()){
            return;
        }
        for(int i=start;i<candidates.size();i++){
            if(i>start && candidates[i] == candidates[i-1]) continue;
            if(candidates[i]>target) break;
            comb.push_back(candidates[i]);
            backtrack(candidates,target-candidates[i],i+1,res,comb);
            comb.pop_back();
        }
    }
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> res;
        vector<int> comb;
        backtrack(candidates,target,0,res,comb);
        return res;
    }
};
