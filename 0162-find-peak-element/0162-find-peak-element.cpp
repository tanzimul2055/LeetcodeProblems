class Solution {
public:
    int findPeakElement(vector<int>& nums) {
       auto mx_element= max_element(nums.begin(),nums.end());
       int mx_index =distance(nums.begin(),mx_element);
       return mx_index; 
    }
};