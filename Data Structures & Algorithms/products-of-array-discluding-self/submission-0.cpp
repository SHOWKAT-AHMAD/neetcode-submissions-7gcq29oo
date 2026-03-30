class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
           int prefix=1;
           vector<int> ans(nums.size(),1);
           for(int i=0;i<nums.size();i++){
                ans[i]=prefix;
                prefix*=nums[i];
           }
           int suffix=1;
           for(int j=nums.size()-1;j>=0;j--){
                ans[j]*=suffix;
                suffix*=nums[j];
           }
           return ans;
    }
};
