class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int x=0,startingposition=-1,endingposition=-1;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==target && x==0){startingposition=i;x=1;}
        else if(nums[i]==target && x==1)endingposition=i;
      }  
      if(x==1 && endingposition==-1)endingposition=startingposition;
      return {startingposition,endingposition};
    }
};
