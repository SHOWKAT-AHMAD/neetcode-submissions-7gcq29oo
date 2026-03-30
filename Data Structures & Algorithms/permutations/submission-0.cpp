class Solution {
    vector<vector<int>> res;
    private:
    void backtrack(vector<int>& nums,vector<bool>& isused,vector<int> temp){
        if(temp.size() == nums.size()){
            res.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(!isused[i]){
                isused[i]=true;
                temp.push_back(nums[i]);
                backtrack(nums,isused,temp);
                isused[i]=false;
                temp.pop_back();
            }
        }
    }
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        vector<bool> isused(nums.size(),false);
        backtrack(nums,isused,temp);
        return res;
    }
};
