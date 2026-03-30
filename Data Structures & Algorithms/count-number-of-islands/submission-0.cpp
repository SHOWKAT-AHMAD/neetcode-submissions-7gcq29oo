class Solution {
        int rd[4]={-1,0,1,0};
        int cd[4]={0,1,0,-1};
    private:
    void dfs(vector<vector<char>>& grid,int row,int col){
        if( row < 0 || col < 0 || row >=grid.size() || col >= grid[0].size() || grid[row][col] == '0'){
            return;
        }

        grid[row][col] = '0';
        for(int i=0;i<4;i++){
            int nr=row+rd[i];
            int nc=col+cd[i];
            dfs(grid,nr,nc);
        }

    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
       
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1'){
                    dfs(grid,i,j);
                    ans+=1;
                }
            }
        }
        return ans;
    }
};