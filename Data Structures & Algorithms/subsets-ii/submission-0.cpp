class Solution {
    void backtrack(vector<int>& nums,vector<vector<int>>& res,int start,int end,vector<int>& temp){
         res.push_back(temp);
         for(int i=start;i<end;i++){
                if(i>start && nums[i]== nums[i-1]){
                    continue;
                }
                temp.push_back(nums[i]);
                backtrack(nums,res,i+1,end,temp);
                temp.pop_back();
         }   
    }

 public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        vector<int> temp;
        backtrack(nums,res,0,n,temp);
        return res;
        
    }
};

