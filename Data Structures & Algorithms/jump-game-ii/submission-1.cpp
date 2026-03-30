class Solution {
public:
    int jump(vector<int>& nums) {
        int jumps=0;
        int farthest=0,nextindex=0;
        for(int i=0;i<nums.size()-1;i++){
            farthest=max(farthest,i+nums[i]);
            if(i == nextindex  ){
                jumps++;
                nextindex=farthest;
            }
        }
        return jumps;
    }
};
