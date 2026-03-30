class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> ans;
        for(int i=0;i<nums.size();i++){
            if(ans.count(nums[i])) return true;
            ans.insert(nums[i]);
        }
        return false;
        
    }
};