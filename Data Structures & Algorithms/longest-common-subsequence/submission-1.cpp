class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length()+1;
        int m=text2.length()+1;
        vector<vector<int>> grid(n,vector<int>(m));
        for(int i=0;i<m;i++){
            grid[0][i]=0;
        }
        for(int i=0;i<n;i++){
            grid[i][0]=0;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                if(text1[i-1] == text2[j-1]){
                    grid[i][j]= 1+grid[i-1][j-1];
                }
                else{
                    grid[i][j]=max(grid[i][j-1],grid[i-1][j]);
                }
            }
        }
        return grid[n-1][m-1];
    }
};