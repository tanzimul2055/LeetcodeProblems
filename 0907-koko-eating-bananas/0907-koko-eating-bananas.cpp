class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
     int n=piles.size();
     int left=1,mid;
     int right=*max_element(piles.begin(),piles.end());
     while(left<=right){
        mid=(left+right)/2;
        long long x=0;
        for(int i=0;i<n;i++){
            x+=(piles[i]/mid);
            if(piles[i]%mid)x++;
        }
        if(x<=h)right=mid-1;
        else left=mid+1;
     }
     return left;
    }
};
