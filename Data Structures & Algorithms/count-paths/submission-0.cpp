class Solution {
    private:
    void dfs(int row,int col,int m,int n,int &paths){
        if(row >m-1 || col >n-1) return;
        if(row == m-1 && col == n-1) {
            paths+=1;
            return;
        }
        dfs(row,col+1,m,n,paths);
        dfs(row+1,col,m,n,paths);
    }
public:
    int uniquePaths(int m, int n) {
        int paths=0;
        dfs(0,0,m,n,paths);
        return paths;
        
    }
};
