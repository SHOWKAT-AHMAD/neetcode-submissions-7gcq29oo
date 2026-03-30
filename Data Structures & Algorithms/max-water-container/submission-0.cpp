class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0,r=heights.size()-1;
        int maxwater=0;
        while(l<r){
            int tempwater=(r-l)*min(heights[l],heights[r]);
            maxwater=max(tempwater,maxwater);
            if(heights[r]>heights[l]){
                l++;
            }
            else{
                r--;
            }
        }
        return maxwater;
    }
};
