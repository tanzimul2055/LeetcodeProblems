class Solution {
public:
    void inorder(TreeNode* root,vector<int>&ans){
        if(!root) return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        TreeNode* node = new TreeNode(ans[0]);
        TreeNode* curr = node;
        for(int i=1;i<ans.size();i++){
            TreeNode* newNode = new TreeNode(ans[i]);
            curr->right = newNode;
            curr = curr->right;
        }
        return node;
    }
};