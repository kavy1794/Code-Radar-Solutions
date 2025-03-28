int findKthMissing(int arr[], int n, int k) {
    int count = 0, num = 1, i = 0;
    
    while (count < k) {
        if (i < n && arr[i] == num) {
            i++;  
        } else {
            count++;  
        }
        if (count == k) return num;
        num++;
    }
    return -1;
}