class Solution {
public:
    int ans=0;
    void dfs(TreeNode* root,int maxvalue){
        if(root==nullptr)return;
        if(root->val>=maxvalue){
            ans++;maxvalue=root->val;
        }
        dfs(root->left,maxvalue);
        dfs(root->right,maxvalue);
    }
    int goodNodes(TreeNode* root) {
     if(root==nullptr)return 0;
     dfs(root,root->val);
     return ans;   
    }
};