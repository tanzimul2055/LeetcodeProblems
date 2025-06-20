class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
      int count=0,i=0,j=nums.size()-1;
      sort(nums.begin(),nums.end());
      while(i<j){
        int sum=nums[i]+nums[j];
        if(sum==k){
            count++;
            j--;i++;
        }
        else if(sum<k)i++;
        else j--;
      }  
      return count;
    }
};