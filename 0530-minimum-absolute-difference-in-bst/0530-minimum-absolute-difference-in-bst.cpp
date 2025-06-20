class Solution {
public:
    void inorder(TreeNode*root,vector<int>&ans){
        if(root==nullptr)return;
        inorder(root->left,ans);
        ans.push_back(root->val);
        inorder(root->right,ans);
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int>ans;
        inorder(root,ans);
        int diff=INT_MAX;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i+1]-ans[i]<diff)diff=ans[i+1]-ans[i];
        }
        return diff;
    }
};
