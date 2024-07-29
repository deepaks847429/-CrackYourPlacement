class Solution {
public:
    TreeNode* build(int l, int r, vector<int>& nums){
        if(l > r) return nullptr;
        int mid = (r+l+1)/2;
        TreeNode* on = new TreeNode(nums[mid]);
        if(r == l) return on;
        on->left = build(l,mid-1,nums);
        on->right = build(mid+1,r,nums);
        return on;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return build(0,nums.size()-1,nums);
    }
};