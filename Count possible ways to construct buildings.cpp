int TotalWays(int N)
	{
	    const int mod = 1000000007;
        int prev = 1, curr = 1;

        for (int i = 0; i < N; ++i) {
            int temp = curr;
            curr = (prev + curr) % mod;
            prev = temp;
        }

        return (static_cast<long long>(curr) * curr) % mod;
	}
