class Solution {
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};
    private:
    bool dfs(int row,int col,vector<vector<char>>& board,string& word,int i){
        if(row < 0 || col < 0 || row >= board.size() || col >= board[0].size() || board[row][col] != word[i]) return false;
        if(i == word.length()-1) return true;
        char temp = board[row][col];
        board[row][col]='#';
        for(int k=0;k<4;k++){
            if(dfs(row+dr[k],col+dc[k],board,word,i+1)) {
                board[row][col]=temp;
                return true;
            }
        }
        board[row][col]=temp;
        return false;

    }
public:
    bool exist(vector<vector<char>>& board, string word) {
        int n=board.size();
        int m = board[0].size();

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(dfs(i,j,board,word,0)) return true;
            }
        }
        return false;
    }
};
