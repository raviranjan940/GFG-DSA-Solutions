// Given a length n, count the number of strings of length n that can be made using a, b and c with at-most one b and two c allowed.

// Example 1:

// Input: n = 1
// Output: 3
// Explanation: Possible strings are: "a",
// "b" and "c"

long long int countStr(long long int n){
    const long long res = 2 * n + (3 * (n - 1) * n) / 2 + (n * (n - 1) * (n - 2)) / 2 + 1;
    return res;
}
