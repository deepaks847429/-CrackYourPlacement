class Solution {
 public:
  vector<int>v;
  void inorder(TreeNode *root){
    if(!root) return;
    inorder(root->left);
    v.push_back(root->val);
     inorder(root->right);
 }

int rangeSumBST(TreeNode* root, int low, int high) {
    inorder(root);
    int ans = 0;
    for(int i=0;i<v.size();i++){
        if(v[i] >=low && v[i]<=high){
            ans+= v[i];
        }
    }
    return ans;
}
};