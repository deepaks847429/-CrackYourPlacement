class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        // if(root->left == nullptr and root->right == nullptr ){
        //     return nullptr;
        // }

        if(root1 == nullptr and root2 == nullptr){
            return nullptr;
        }


        TreeNode*node = nullptr;

        if(root1 and root2){
            node = new TreeNode(root1->val + root2->val);
            node->left = mergeTrees(root1->left,root2->left);
            node->right = mergeTrees(root1->right,root2->right);
        }

        if(!root1){          
            node = new TreeNode( root2->val);
            node->left = mergeTrees(nullptr,root2->left);
            node->right = mergeTrees(nullptr,root2->right);
        }

        if(!root2){
            node = new TreeNode(root1->val);
            node->left = mergeTrees(root1->left,nullptr);
            node->right = mergeTrees(root1->right,nullptr);
        }
 
         
 
        return node;
    }
};