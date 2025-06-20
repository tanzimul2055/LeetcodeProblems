class Solution {
public:
    vector<int> countBits(int n) {
      vector<int>v;
      v.push_back(0);
      for(int i=1;i<=n;i++){
        int x=v[i-1]+1,y=v[i/2];
        if(i%2)v.push_back(x);
        else v.push_back(y);
      }  
      return v;
    }
};