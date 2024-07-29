class Solution {
public:

    void inorder(TreeNode* root,vector<int>& vec)
    {
        if(root==nullptr)
        {
            return;
        }
        inorder(root->left,vec);
        vec.push_back(root->val);
        inorder(root->right,vec);
    }

    int getMinimumDifference(TreeNode* root) 
    {
        vector<int> vec;
        inorder(root,vec);
        int min=INT_MAX;
        for(int i=0;i<vec.size();i++)
        {
            for(int j=i+1;j<vec.size();j++)
            {
                if(vec[j]-vec[i]<min)
                {
                    min=vec[j]-vec[i];
                }
            }
        }
        return min;
    }
};