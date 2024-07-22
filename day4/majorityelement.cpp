class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int>mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
        }
        int majority=floor(nums.size()/2);
        for(auto i :mpp){
            if(i.second>majority){
                return i.first;
            }
        }
        return -1;
        
    }
};

