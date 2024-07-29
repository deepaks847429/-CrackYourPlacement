class Solution {
public:
    bool ans;

    int geth(TreeNode* root)
    {
        if(!root) return 0;
        int lh = geth(root->left);
        int rh = geth(root->right);
        if(abs(lh-rh) > 1) ans = false;
        return 1+max(lh,rh);
    }
    
    bool isBalanced(TreeNode* root) {
        ans = true;
        geth(root);
        return ans;
    }
};