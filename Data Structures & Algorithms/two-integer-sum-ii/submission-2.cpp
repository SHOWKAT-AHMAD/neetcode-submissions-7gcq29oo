class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0;
        int r=numbers.size()-1;
        while(l<r){
            int result=numbers[l]+numbers[r];
            if(result == target) return {l+1,r+1};
            else if(result < target) l++;
            else r--;
        }
        return {};
    }
};
