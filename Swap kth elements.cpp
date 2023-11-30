// swap k'th element from beginning and end
	void swapKth(int *arr, int n, int k) {
	   int swap = arr[k-1];
	   arr[k-1] = arr[n-k];
	   arr[n-k] = swap;
	}
