class RecentCounter {
    vector<int> v;
    int k;
public:
    RecentCounter() : k(0) {}
    int ping(int t) {
        v.push_back(t);
        while (v[k] < t - 3000) k++;
        return v.size() - k;
    }
};
