// Function to check if array has 2 elements
// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	 sort(arr,arr+n);
	    
	    int i=0 , j=n-1;
	    
	    while(i<j){ 
	        int sum = arr[i] + arr[j];
	        
	        if(sum == x) return true; 
	        else if(sum<x) i++;  
	        else j--;
	        
	    }
	    return false;
	}
