class Solution {
public:

    vector<int> helper;

    void solve(TreeNode* root,int level){
        if(!root) return ;

        if(level>=helper.size()){
            helper.push_back(root->val);
        }

        solve(root->left,level+1);
        solve(root->right,level+1);
    }

    int findBottomLeftValue(TreeNode* root) {
        helper.clear();

        solve(root,0);
        return helper.back();
    }
};