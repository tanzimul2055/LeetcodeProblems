class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size(), ans = n+1, sum = 0, l=0 ;

        for(int i=0;i<n;i++){
            sum+=nums[i] ;
            while(sum>=target){
                ans = min(ans, i-l+1) ;
                sum-=nums[l] ;
                l++; 
            }            
        }

        return (ans==n+1)? 0 : ans  ;
    }
};