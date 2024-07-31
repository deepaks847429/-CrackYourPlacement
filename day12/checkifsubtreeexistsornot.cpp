class Solution {
public:
    bool isSameTree(TreeNode* root,TreeNode* subRoot){
        if(!root || !subRoot){
            return (root == subRoot);
        }
        bool value = (root->val == subRoot->val);
        bool left = isSameTree(root->left,subRoot->left);
        bool right = isSameTree(root->right,subRoot->right);
        return ((value && left)&&right);
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
       if(subRoot == NULL){
        return true;
       }
       if(root == NULL){
        return false;
       }
       if(isSameTree(root,subRoot)){
        return true;
       }
       return isSubtree(root->left,subRoot)||isSubtree(root->right,subRoot);
    }
};