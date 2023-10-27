// User function template for C++
class Solution {
public:
    // Function to return the sum of 1, 2, ... n
    long long seriesSum(int n) {
        long long ans; // Initialize a variable 'ans' to store the result.

        // Check if 'n' is even.
        if (n % 2 == 0) {
            ans = n / 2; // Calculate 'ans' by dividing 'n' by 2.
            return ans * (n + 1); // Return the sum of the series 1 + 2 + ... + n using the formula (n/2) * (n+1).
        } else {
            ans = (n + 1) / 2; // Calculate 'ans' by dividing (n+1) by 2.
            return n * ans; // Return the sum of the series 1 + 2 + ... + n using the formula n * ((n+1)/2).
        }
    }
};
