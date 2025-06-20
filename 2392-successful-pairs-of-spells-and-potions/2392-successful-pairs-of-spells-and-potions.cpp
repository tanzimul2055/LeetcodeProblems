class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
      sort(potions.begin(),potions.end());
      int n=spells.size();
      int m=potions.size();
      vector<int>v;
      for(int i=0;i<n;i++){
        long long x=spells[i];
        int left=0,right=m-1;
        while(left<=right){
            int mid=(left+right)/2;
            long long xx=x*potions[mid];
            if(xx>=success)right=mid-1;
            else left=mid+1;
        }
        v.push_back(m-left);
      }
      return v;
    }
};