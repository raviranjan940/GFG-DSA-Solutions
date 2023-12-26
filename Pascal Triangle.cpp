// #define ll long long
class Solution{
public:
    vector<long long> nthRowOfPascalTriangle(int n) {
        vector<long long> pascal;
        for(int i = 0; i < n; i++) {
            pascal.push_back(1);
            for(int j = i-1; j > 0; j--) {
                pascal[j] = ((pascal[j] + pascal[j-1]) % (1000000007));
            }
        }
        return pascal;
    }
};
