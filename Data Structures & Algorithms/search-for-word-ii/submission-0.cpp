class TrieNode{
    public:
        unordered_map<char,TrieNode*> children;
        bool isend;
        TrieNode(){
            isend=false;
        }
        void insert(string word,TrieNode* root){
            TrieNode* node = root;
            for(char c:word){
                if(!node->children.count(c)){
                    node->children[c]=new TrieNode();
                }
                node=node->children[c];
            }
            node->isend=true;
        }
};
class Solution {
    private:
    void dfs(int r,int c,vector<vector<char>>& board,TrieNode* node,string word){
        if(r < 0 || r >= board.size() || c < 0 || c >= board[0].size() || !node->children.count(board[r][c]) || board[r][c] == '*'){
            return;
        }
        word+=board[r][c];
        node=node->children[board[r][c]];
        if(node->isend){
            node->isend=false;
            res.push_back(word);
        }
        char temp=board[r][c];
        board[r][c]='*';
        dfs(r-1,c,board,node,word);
        dfs(r,c+1,board,node,word);
        dfs(r+1,c,board,node,word);
        dfs(r,c-1,board,node,word);
        board[r][c]=temp;
    }

public:
    vector<string> res;
    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
        TrieNode* root=new TrieNode();
        for(auto w:words){
            root->insert(w,root);
        }
        int n=board.size();
        int m=board[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                dfs(i,j,board,root,"");
            }
        }
        return res;
    }
};
