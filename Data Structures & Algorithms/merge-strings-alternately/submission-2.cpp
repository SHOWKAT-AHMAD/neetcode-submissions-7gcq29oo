class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int s1=word1.size();
        int s2=word2.size();
        string res="";
        int i=0;
        while(i<s1 && i<s2){
            res+=word1[i];
            res+=word2[i];
            i++;
        }
        res+=word1.substr(i,s1-i);
        res+=word2.substr(i,s2-i);
        return res;
    }
};