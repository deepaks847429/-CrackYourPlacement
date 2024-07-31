class Solution {
public:
    long long lower = 0;
    long long upper = 0;
    int cnt = 0;

    void merge(vector<long long>& arr, int low, int mid, int high) {
        vector<long long> temp; 
        int left = low;
        int right = mid + 1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.push_back(arr[left]);
                left++;
            }
            else {
                temp.push_back(arr[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(arr[left]);
            left++;
        }
        while (right <= high) {
            temp.push_back(arr[right]);
            right++;
        }
        for (int i = low; i <= high; i++) {
            arr[i] = temp[i - low];
        }
    }

    void countpairs(vector<long long>& prefix, int low, int mid, int high) {
        int i = low;
        int si = mid + 1;
        int ei = mid + 1;
        while (i <= mid) {
            while (si <= high && (long long)prefix[si] - (long long)prefix[i] < lower) {
                si++;
            }
            while (ei <= high && (long long)prefix[ei] - (long long)prefix[i] <= upper) {
                ei++;
            }
            cnt += ei - si;
            i++;
        }
    }

    void mergeSort(vector<long long>& arr, int low, int high) {
        if (low >= high) return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid);  
        mergeSort(arr, mid + 1, high);
        countpairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return;
    }

    int countRangeSum(vector<int>& nums, int Lower, int Upper) {
        lower = (long long)Lower;
        upper = (long long)Upper;
        int n = nums.size();
        if (n == 0) return 0;
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + (long long)nums[i];
        }
        mergeSort(prefix, 0, n);
        return cnt;
    }
};