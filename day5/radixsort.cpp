void countSort(int arr[],const int &n,const int &exp) {
    int count[10] = {0};
    for(int i = 0; i < n; i++) count[(arr[i]/exp) % 10]++;
    for(int i = 1; i < 10; i++) count[i] += count[i - 1];
    int output[n];
    for(int i = n - 1; i >= 0; i--) {
        output[count[(arr[i]/exp) % 10] - 1] = arr[i];
        count[(arr[i]/exp) % 10]--;
    }
    for(int i = 0; i < n; i++) arr[i] = output[i];
}

void radixSort(int arr[], int n) { 
   int maxElement = INT_MIN;
   for(int i = 0; i < n; i++) maxElement = max(arr[i], maxElement);
   for(int exp = 1; maxElement/exp > 0; exp *= 10)
        countSort(arr, n, exp);
} 