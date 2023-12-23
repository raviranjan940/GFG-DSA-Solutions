//Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        sort(arr, arr+n);
        int ans = 0;
        int cnt = 1;
        for(int i=1; i<n; i++){
            if(arr[i] == arr[i-1]){
                cnt++;
            }else{
                if(cnt>(n/k))
                ans++;
                cnt=1;
            }
        }
        if(cnt>(n/k))
        ans++;
        return ans;
    }
