class Solution {
public:
    bool dfs(TreeNode* left,TreeNode* right){
        if(left==nullptr && right==nullptr)return true;
        if(left==nullptr || right==nullptr)return false;
        if(left->val!=right->val)return false;
        return dfs(left->left,right->right)&&dfs(left->right,right->left);
    }
    bool isSymmetric(TreeNode* root) {
     if(root==nullptr)return true;
     return dfs(root->left,root->right);  
    }
};