class Solution {
public:
    vector<int> partitionLabels(string s) {
        int l=s.length();
        vector<int> end(26,0);
        for(int i=0;i<l;i++){
            end[s[i]-'a']=i;
        }
        vector<int> res;
        int start=0;
        int endpoint=end[s[0]-'a'];
        for(int i=0;i<l;i++){
            if(i == endpoint){
                res.push_back(endpoint-start+1);
                start=i+1;
                endpoint=end[s[i+1]-'a'];
            }
            else if(end[s[i] - 'a']>endpoint){endpoint=end[s[i]-'a'];}
        }
        return res;
    }
};
