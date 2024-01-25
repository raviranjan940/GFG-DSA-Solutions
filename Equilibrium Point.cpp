// Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        int p = 0, sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        for(int i=0; i<n; i++){
            if(p == sum-p-a[i]){
                return i+1;
            }
            p = p+a[i];
        }
        return -1;
