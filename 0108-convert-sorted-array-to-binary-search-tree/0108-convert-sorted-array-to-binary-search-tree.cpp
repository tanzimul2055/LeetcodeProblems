class Solution {
public:
    TreeNode* dfs(vector<int>&nums,int left,int right){
     if(left>right)return nullptr;
     int mid=left+(right-left)/2;
     TreeNode* root=new TreeNode(nums[mid]);
     root->left=dfs(nums,left,mid-1);
     root->right=dfs(nums,mid+1,right);
     return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
     return dfs(nums,0,nums.size()-1);   
    }
};