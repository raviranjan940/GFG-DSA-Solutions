// Given an array of size N and you have to tell whether the array is perfect or not. An array is said to be perfect if its reverse array matches the original array. If the array is perfect then return True else return False.

// Example 1:

// Input : Arr[] = {1, 2, 3, 2, 1}
// Output : PERFECT
// Explanation:
// Here we can see we have [1, 2, 3, 2, 1] 
// if we reverse it we can find [1, 2, 3, 2, 1]
// which is the same as before.
// So, the answer is PERFECT.

##Code:
int s=0, e=n-1;
while(s<=e){
  if(a[s++] != a[e--]) return 0;
}
return 1;
