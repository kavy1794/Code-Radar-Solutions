int binarySearch(int arr[], int n,int k) {
    int found=0, a=0;
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
       
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            a=i;
            found=1;
        }if(arr[i]==arr[i+1]){
            return 3;
        }
    }
    if(found){
        return a;
    }else{
        return -1;
    }
}