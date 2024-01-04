 int singleElement(int arr[] ,int N) {
        int ones = 0, twos = 0;
        for (int i=0; i<N; i++) {
            ones = (ones ^ arr[i]) & ~twos;
            twos = (twos ^ arr[i]) & ~ones;
        }
        return ones;
    }
