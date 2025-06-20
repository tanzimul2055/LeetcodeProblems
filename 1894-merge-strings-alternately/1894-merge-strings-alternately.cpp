class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ss;
        int i=0;
        while(i<word1.length()||i<word2.length()){
            if(i<word1.length())ss+=word1[i];
            if(i<word2.length())ss+=word2[i];
            i++;
        }
        return ss;
    }
};