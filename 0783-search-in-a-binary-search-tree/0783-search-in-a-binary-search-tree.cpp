class Solution {
public:
    TreeNode* dfs(TreeNode* node,int val){
        if(node==nullptr)return nullptr;
        if(node->val==val)return node;
        else if(node->val<val)return dfs(node->right,val);
        else if(node->val>val)return dfs(node->left,val);
        return nullptr;
    }
    TreeNode* searchBST(TreeNode* root, int val) {
        TreeNode* node=dfs(root,val);
        return node;
    }
};
