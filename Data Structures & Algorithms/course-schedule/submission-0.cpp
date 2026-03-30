class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjlist(numCourses);
        vector<int> indegre(numCourses,0);
        for(auto v:prerequisites){
            adjlist[v[0]].push_back(v[1]);
            indegre[v[1]]++;
        }
        queue<int> q;
        for(int i=0;i<numCourses;i++){
            if(indegre[i] == 0){
                q.push(i);
            }
        }
        int finish=0;
        while(!q.empty()){
            int node=q.front();
            q.pop();
            finish++;
            for(auto n:adjlist[node]){
                indegre[n]--;
                if(indegre[n] == 0) q.push(n);
            }
        }
        return finish == numCourses;
        
    }
};
