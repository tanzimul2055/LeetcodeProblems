class Solution {
public:
    long long maxScore(vector<int>& speed, vector<int>& efficiency, int k) {
        int n = speed.size();
        vector<pair<int, int>> ess(n);  
        for (int i = 0; i < n; ++i) ess[i] = {efficiency[i], speed[i]};
        sort(ess.begin(), ess.end(), [](auto& a, auto& b) {
            return a.first > b.first;
        });
        priority_queue<int, vector<int>, greater<int>> pq;
        long long res = 0, sumS = 0;
        for (auto& [e, s] : ess) {
            pq.push(s);
            sumS += s;
            if (pq.size() > k) {
                sumS -= pq.top();
                pq.pop();
            }
            if (pq.size() == k) {
                res = max(res, sumS * e);
            }
        }
        return res;
    }
};