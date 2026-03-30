class Solution {
public:
    int lengthOfLastWord(string s) {
        int m=s.length();
        int n=m-1;
        while(n>=0 && s[n] == ' ' ){
            n--;
        }
        int length=0;
        while(n>=0 && s[n] != ' '){
            n--;
            length++;
        }
        return length;
    }
};