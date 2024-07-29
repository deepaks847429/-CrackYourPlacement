class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int maxleft=maxDepth(root->left);
        int maxRight=maxDepth(root->right);
        return max(maxleft, maxRight)+1;
        
    }
};

