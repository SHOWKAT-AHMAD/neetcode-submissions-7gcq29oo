class Solution {
    private:
    void dfs(vector<vector<int>>& heights,int r,int c,vector<vector<bool>>& result){
        result[r][c]=true;
        int directions[4][2]={{0,-1},{-1,0},{0,1},{1,0}};
        for(auto &direc:directions){
            int dr=r+direc[0];
            int dc=c+direc[1];
            if(dr >=0 && dc >=0 && dr < heights.size() && dc < heights[0].size() && !result[dr][dc] && heights[r][c] <= heights[dr][dc]){
                dfs(heights,dr,dc,result);
            }
        }
        return;
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        vector<vector<bool>> pacific(n,vector<bool>(m,false));
        vector<vector<bool>> atlantic(n,vector<bool>(m,false));

        for(int i=0;i<n;i++){
            if(!pacific[i][0]) dfs(heights,i,0,pacific);
            if(!atlantic[i][m-1]) dfs(heights,i,m-1,atlantic);
        }
        for(int i=0;i<m;i++){
            if(!pacific[0][i]) dfs(heights,0,i,pacific);
            if(!atlantic[n-1][i]) dfs(heights,n-1,i,atlantic);
        }
        vector<vector<int>> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(pacific[i][j] && atlantic[i][j]){
                    ans.push_back({i,j});
                }
            }
        }
        return ans;
    }
};
