class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == 0) q.push({i,j});
            }
        }
        vector<vector<int>> directions={{0,-1},{-1,0},{0,1},{1,0}};
        while(!q.empty()){
            int r=q.front().first;
            int c=q.front().second;
            q.pop();
            for(auto &dir:directions){
                int row=r+dir[0];
                int col=c+dir[1];
                if(row < 0 || col<0 || row >=n || col >= m || grid[row][col] != INT_MAX) continue;
                grid[row][col]=grid[r][c]+1;
                q.push({row,col});
            }
        }
    }
};
