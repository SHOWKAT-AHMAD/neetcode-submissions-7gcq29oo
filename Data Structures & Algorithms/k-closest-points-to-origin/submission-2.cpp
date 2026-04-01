class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int,pair<int,int>>> maxheap;
        for(auto point:points){
            int x2=point[0];
            int y2=point[1];
            int dist=((x2*x2) + (y2*y2));
            maxheap.push({dist,{x2,y2}});
            if(maxheap.size()>k) maxheap.pop();
        }
        vector<vector<int>> res;
        while(!maxheap.empty()){
            res.push_back({maxheap.top().second.first,maxheap.top().second.second});
            maxheap.pop();
        }
        return res;
    }
};
