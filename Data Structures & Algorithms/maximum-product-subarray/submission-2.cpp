class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int maxprod=nums[0];
        int minprod=nums[0];
        int maxi=maxprod;

        for(int i=1;i<n;i++){
            if(nums[i]<0){
                swap(maxprod,minprod);
            }
            int curr=nums[i];
            maxprod=max(curr,maxprod*curr);
            minprod=min(curr,minprod*curr);
            maxi=max(maxi,maxprod);
        }
        return maxi;
    }
};
