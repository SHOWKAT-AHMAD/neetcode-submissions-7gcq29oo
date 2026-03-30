class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n=text1.length()+1;
        int m=text2.length()+1;
        vector<int> prev(m,0);

        for(int i=1;i<n;i++){
            int diag = 0;
            for(int j=1;j<m;j++){
                int temp = prev[j];
                if(text1[i-1] == text2[j-1]){
                    prev[j]=diag+1;
                }
                else{
                    prev[j]= max(prev[j],prev[j-1]);
                }
                diag = temp;
            }
        }
    return prev[m-1];
    }
};