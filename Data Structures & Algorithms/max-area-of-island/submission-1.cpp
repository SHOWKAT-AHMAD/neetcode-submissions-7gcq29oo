class Solution {
    private:
    int directions[4][2] = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};
    int dfs(vector<vector<int>>& grid,int r,int c){
        if(r <0 || r>=grid.size() || c <0 || c>=grid[0].size() || grid[r][c] ==0) return 0;
        grid[r][c]=0;
        int ans=1;
        for(int i=0;i<4;i++){
            ans+=dfs(grid,r+directions[i][0],c+directions[i][1]);
        }
        return ans;

    }
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int maxarea=0;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if( grid[i][j]==1){
                    maxarea=max(maxarea,dfs(grid,i,j));
                }
            }
        }
        return maxarea;
    }
};
