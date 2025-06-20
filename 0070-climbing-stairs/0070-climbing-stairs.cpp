class Solution {
public:
    int climbStairs(int n) {
     if(n<=3)return n;
     int first=2,second=3;
     for(int i=4;i<=n;i++){
        second+=first;first=second-first;
     }  
     return second; 
    }
};
