class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<int> st;
        int i = 0, j = 0, ans = 0;
        while (j < s.size()) {
            if (st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                ans = max(ans, j - i + 1);
                j++;
            }
            else {
                st.erase(s[i]);
                i++;
            }
        }
        return ans;
    }
};