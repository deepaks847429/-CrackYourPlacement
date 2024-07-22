class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int n=height.size();
        int right=n-1;
        int area=0;
        while(left<=right){
            int w= right-left;
            int h=min(height[left], height[right]);
            int newarea=h*w;
            area=max(area, newarea);
            
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }

        }


       return area;
    }
};