class Solution {
public:
    int maxArea(vector<int>& height) {
      int i=0,j=height.size()-1,maxarea=0;
      while(i<j){
        int currentarea=min(height[i],height[j])*(j-i);
        maxarea=max(maxarea,currentarea);
        if(height[i]>=height[j])j--;
        else i++;
      }
      return maxarea; 
    }
};