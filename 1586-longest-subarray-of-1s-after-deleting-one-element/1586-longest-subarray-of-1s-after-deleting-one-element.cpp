class Solution {
public:
    int longestSubarray(vector<int>& nums) {
      int left=0,zero_count=0,max_length=0;
      for(int right=0;right<nums.size();right++){
        if(nums[right]==0)zero_count++;
        while(zero_count>1){
            if(nums[left]==0)zero_count--;
            left++;
        }
        max_length=max(max_length,right-left);
      } 
      if(max_length==nums.size())max_length--;
      return max_length; 
    }
};