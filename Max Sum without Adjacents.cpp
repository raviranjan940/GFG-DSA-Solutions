// Given an array Arr of size N containing positive integers. Find the maximum sum of a any possible subsequence such that no two numbers in the subsequence should be adjacent in Arr.

// Example 1:

// Input:
// N = 6
// Arr[] = {5, 5, 10, 100, 10, 5}
// Output: 110
// Explanation: If you take indices 0, 3
// and 5, then Arr[0]+Arr[3]+Arr[5] =
// 5+100+5 = 110.

// calculate the maximum sum with out adjacent
	int findMaxSum(int *arr, int n) {
	    int prev = arr[0];
	    int prev2 = 0;
	    
	    for(int i=1;i<n;i++){
	        
	        int pick = arr[i];
	        if(i > 1) pick += prev2;
	        
	        int notPick = prev;
	        
	        int curr = max(pick, notPick);
	        
	        prev2 = prev;
	        prev = curr;
	    }
	    
	    return prev;
	}
