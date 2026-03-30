class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> indexmap;
        for(int i=0;i<nums.size();i++){
            int diff=target-nums[i];
            if(indexmap.count(diff)){
               return {indexmap[diff],i};
            }
            indexmap[nums[i]]=i;
        }
        return {};
    }
};
