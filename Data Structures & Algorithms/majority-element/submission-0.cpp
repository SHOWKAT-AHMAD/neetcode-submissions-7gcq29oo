class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int majority=1, val=nums[0];
        for(int i=1;i<n;i++){
            if(nums[i] != val){
                majority--;
                if(majority == 0){
                    majority++;
                    val=nums[i];
                }
            }
            else{ 
                majority++;
            } 
        }
        return val;
    }
};