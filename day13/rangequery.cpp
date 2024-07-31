class NumArray {
public:
    vector<int> segmenttree;
    int len;
    NumArray(vector<int>&nums){
        len= nums.size();
       segmenttree.resize(2*len, 0);
       int index=0;
       for(int i{len};i< segmenttree.size();++i){
            segmenttree[i]=nums[index++];
       }
       for(int i{len-1};i>0;--i){
        segmenttree[i]= segmenttree[i*2] + segmenttree[i*2+1];
       }
    }
    void update(int index, int val){
        int actualindex = len+index;
        int dif = val - segmenttree[actualindex];
        while(actualindex>0){
            segmenttree[actualindex]+=dif;
            actualindex/=2;
        }
    }
    int sumRange(int left, int right){
       left+=len;
        right+=len;
        int sum=0;
        while(left<=right){
            if(left%2==1){
                sum+=segmenttree[left];
                left++;
            }
            if(right%2==0){
                sum+=segmenttree[right];
                right--;
            }
            left/=2;
            right/=2;
        }
        return sum;
    }
};