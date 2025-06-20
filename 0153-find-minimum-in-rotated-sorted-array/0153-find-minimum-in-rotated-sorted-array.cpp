class Solution {
public:
    int findMin(vector<int>& nums) {
     int mn_element=*min_element(nums.begin(),nums.end());
     return mn_element;
    }
};