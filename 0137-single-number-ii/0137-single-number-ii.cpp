class Solution {
public:
    int singleNumber(vector<int>& nums) {
     unordered_map<int,int>a;
     for(auto x:nums)a[x]++;
     for(auto u:a)
     if(u.second==1)return u.first;
     return -1;   
    }
};
