class Solution {
public:
    int ans=0;
    int dfs(TreeNode* node){
        if(node==nullptr)return 0;
        int left=dfs(node->left);
        int right=dfs(node->right);
        ans=max(ans,left+right);
        return max(left,right)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
    dfs(root);
    return ans;    
    }
};