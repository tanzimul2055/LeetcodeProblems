class Solution {
public:
    bool isPalindrome(int x) {
    string s=to_string(x);
    int ans=0;
    for(int i=0;i<s.size()/2;i++){
        if(s[i]!=s[s.size()-(i+1)])ans=1;
    } 
    if(ans)return false;
    else return true;
    }
};