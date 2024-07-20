class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int left=0;
        int right=nums.size()-1;
        int mid=(left+right)/2;
        
        int ans=0;
        for(int i=0; i<nums.size(); i++){
            ans+=abs(nums[i]-nums[mid]);
        }
        return ans;
        
    }
};