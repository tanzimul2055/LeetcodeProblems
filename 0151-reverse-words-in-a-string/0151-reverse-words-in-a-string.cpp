class Solution {
public:
    string reverseWords(string s) {
        vector<string> st;
        int n = s.size();
        int b = -1, e = -1;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' ') {
                if((i == 0) || (s[i-1] == ' ')) b = i;
                if((i == n-1 ) || (s[i+1] == ' ')) e = i;
            }
            if(b != -1 && e != -1){
                st.push_back(s.substr(b, e-b+1));
                b = -1;
                e = -1;
            }
        }
        string ans = "";
        for(int i = st.size() - 1; i >= 0; i--){
            ans+= st[i];
            if(i != 0) ans += " ";
        }
    
        return ans;
    }
};