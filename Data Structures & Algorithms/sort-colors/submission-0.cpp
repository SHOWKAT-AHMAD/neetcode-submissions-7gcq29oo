class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int low=0, med=0, high=n-1;
        while(med <= high){
                if(nums[med] == 0){
                    swap(nums[med],nums[low]);
                    low++;
                }
                else if(nums[med] == 2){
                    swap(nums[med],nums[high]);
                    high--;
                    med--;
                }
                med++;
        }
    }
};