class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> ans;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>0) break;
            if(i > 0 && nums[i] == nums[i-1]) continue;
            int num=nums[i];
            int l=i+1;
            int r=nums.size()-1;
            while(l<r){
                int sum=nums[l]+nums[r];
                if(sum+num == 0){
                    ans.push_back({num,nums[l],nums[r]});
                    l++;
                    r--;
                    while(l<r && nums[l]== nums[l-1]) l++;
                }
                else if(sum+num<0) l++;
                else r--;
            }
        }
        return ans;
    }
};
