class Solution {
    void backtrack(vector<int>& nums,vector<vector<int>>& res,int start,int end,vector<int>& temp){
         res.push_back(temp);
         for(int i=start;i<end;i++){
                temp.push_back(nums[i]);
                backtrack(nums,res,i+1,end,temp);
                temp.pop_back();
         }   
    }

public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(nums,res,0,n,temp);
        return res;
        
    }
};
