class Solution {
    void comSum(vector<int>& nums,vector<vector<int>>& ans,int index,int target,int sum,vector<int>& result){
        if(sum == target){
            ans.push_back(result);
            return;
        }
        if(sum > target || index >= nums.size()){
            return;
        }
        result.push_back(nums[index]);
        comSum(nums,ans,index,target,sum+nums[index],result);
        result.pop_back();
        comSum(nums,ans,index+1,target,sum,result);
        
    }

public:    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        vector<int> result;
        int sum=0;
        comSum(nums,ans,0,target,sum,result);
        return ans;
    }
};
