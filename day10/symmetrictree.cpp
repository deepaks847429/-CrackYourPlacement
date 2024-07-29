class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true;
        bool ans = myf(root->left,root->right);
        return ans;
    }
    bool myf(TreeNode* a , TreeNode* b){
        if(!a && !b) return true;
        if((a && !b) || (b && !a)) return false;
        if(a->val==b->val){
          return myf(a->left,b->right) && myf(a->right,b->left);
        }
        else return false;
    }
};