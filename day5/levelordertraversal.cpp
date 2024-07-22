class Solution {
private:
    void levelOrder(TreeNode* &root, vector<vector<int>>& ans){
        if(root == NULL) return;

        queue<TreeNode*>q;
        q.push(root);

        while(!q.empty()){
            
            int n = q.size();
            vector<int> temp;

            while(n--){
                TreeNode* curr = q.front();
                q.pop();
                temp.push_back(curr->val);
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }

            ans.push_back(temp);
        }
    }
public:
    vector<vector<int>> levelOrder(TreeNode* root ) {
        if(root == NULL) return {};

        vector<vector<int>> ans;
        levelOrder(root, ans);

        return ans;
    }
};