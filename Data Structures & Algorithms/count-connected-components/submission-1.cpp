class Solution {
    void dfs(int i,vector<vector<int>> & adj,vector<bool>& vis){
        vis[i]=true;
        for(auto node:adj[i]){
            if(!vis[node]){
                dfs(node,adj,vis);
            }
        }
        return;
    }
public:
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> adj(n);
        for(auto edge:edges){
            adj[edge[0]].push_back(edge[1]);
            adj[edge[1]].push_back(edge[0]);
        }
        int count=0;
        vector<bool> vis(n,false);

        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(i,adj,vis);
                count++;
            }
        }
        return count;
        

    }
};
