class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
      int low=0,high=nums.size(),mid;
      if(nums[high-1]<target)return high;
      while(low<=high){
        mid=(high+low)/2;
        if(nums[mid]==target)return mid;
        else if(nums[mid]<target)low=mid+1;
        else high=mid-1;
      }
      return low;
    }
};