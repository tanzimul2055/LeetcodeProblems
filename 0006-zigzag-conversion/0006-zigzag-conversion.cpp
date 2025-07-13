class Solution {
public:
    string convert(string s, int numRows) {
    int len=s.length(),index=0;
    if(numRows==1)return s;
    string ss;
    for(int i=0;i<numRows;i++){
        for(int j=i;j<len;j+=2*(numRows-1)){
            ss+=s[j];
            if(i>0 && i<numRows-1 && j+2*(numRows-1)-2*i<len)
            ss+=s[j+2*(numRows-1)-2*i];
        }
    }
    return ss;
    }
};