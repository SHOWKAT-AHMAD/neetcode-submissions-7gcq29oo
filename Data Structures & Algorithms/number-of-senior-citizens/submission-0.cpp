class Solution {
public:
    int countSeniors(vector<string>& details) {
        int n=details.size();
        int count=0;

        for(int i=0;i<n;i++){
            int ten = details[i][11] - '0';
            int one = details[i][12] - '0';
            int age = one + 10 * ten;
            if(age>60) count++;
        }
        return count;
    }
};