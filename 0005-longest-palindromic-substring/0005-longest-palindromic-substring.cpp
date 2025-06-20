class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n==1) return s;
        vector<vector<bool>>dp(n,(vector<bool>(n,false)));
        for(int i=0;i<n;i++){
            dp[i][i] = true; 
        }
        int start = 0;
        int maxlen = 1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                dp[i-1][i] = true;
                start = i-1;
                maxlen = 2;
            }
        }
        for(int len=3;len<=n;len++){
            for(int i=0;i<n-len+1;i++){
                int j=i+len-1;
                if(s[i] == s[j] && dp[i+1][j-1]){
                    dp[i][j] = true;
                    if(len > maxlen){
                        maxlen = len;
                        start = i;
                    }
                }
            }
        }
        return s.substr(start,maxlen);
    }
};
