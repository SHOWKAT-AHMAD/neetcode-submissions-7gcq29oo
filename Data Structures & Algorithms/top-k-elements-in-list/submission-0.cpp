class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> nummap;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            nummap[num]++;
        }
        vector<vector<int>> freq(nums.size()+1);
        for(auto m:nummap){
            freq[m.second].push_back(m.first);
        }
        vector<int> result;
        for(int j=freq.size()-1;j>=0;j--){
            for(auto t:freq[j]){
                result.push_back(t);
                if(result.size()== k) return result;
            }
        }
        return result;
    }
};
