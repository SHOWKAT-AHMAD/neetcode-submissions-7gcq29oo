class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> res;
        for(int i=0;i<position.size();i++){
            double time=(double)(target-position[i])/speed[i];
            res.push_back({position[i],time});
        }
        sort(res.begin(),res.end());
        int fleet=0;
        double prev=-1;
        for(int i=position.size()-1;i>=0;i--){
                double curr=res[i].second;
                if(curr > prev){
                    fleet++;
                    prev=curr;
                }
        }
        return fleet;
    }
};
