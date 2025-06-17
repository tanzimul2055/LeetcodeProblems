class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
     int target=0;
     sort(nums.begin(),nums.end());
     set<vector<int>>sett; 
     for(int i=0;i<nums.size();i++) {
        int j=i+1,k=nums.size()-1;
        while(j<k){
            int sum=nums[i]+nums[j]+nums[k];
            if(sum==target){
                sett.insert({nums[i],nums[j],nums[k]});
                j++;k--;
            }
            else if(sum<target)j++;
            else k--;
        }
     }
     vector<vector<int>>output;
     for(auto u : sett)output.push_back(u);
     return output;
    }
};