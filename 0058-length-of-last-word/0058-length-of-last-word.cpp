class Solution {
public:
    int lengthOfLastWord(string s) {
       reverse(s.begin(),s.end());
       int len=0,ans=0;
       for(int i=0;i<s.size();i++){
         if(s[i]!=' '){
            len++;
            ans=1;
         }
         else if(ans==1 && s[i]==' ')break;
       }
       return len;
    }
};