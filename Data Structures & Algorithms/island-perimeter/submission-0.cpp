class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int res=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 1){
                        res+=(i+1 >= n || grid[i+1][j] ==0)?1:0;
                        res+=(i-1 < 0 || grid[i-1][j] ==0)?1:0;
                        res+=(j+1 >= m || grid[i][j+1] ==0)?1:0;
                        res+=(j-1 < 0 || grid[i][j-1] ==0)?1:0;
                }
            }
        }
        return res;
    }
};