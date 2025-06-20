class Solution {
public:
    void dfs(TreeNode*root,vector<int>&list){
        if(root==nullptr)return;
        if(root->left==nullptr && root->right==nullptr)list.push_back(root->val);
        dfs(root->left,list);
        dfs(root->right,list);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
     vector<int>list1,list2;
     dfs(root1,list1);
     dfs(root2,list2);
     return(list1==list2); 
    }
};