class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        set<int> numSet(nums.begin(),nums.end());
        int longest=0;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            if(numSet.count(num-1)){
                continue;
            }
            int templongest=0;
            while(numSet.count(num)){
                templongest+=1;
                num+=1;
            }
            longest=max(longest,templongest);
        }
        return longest;
    }
};
