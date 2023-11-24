// Trailing zeroes in factorial
int trailingZeroes(int N)
    {
        int cnt = 0;
        while(N>=5){
            cnt +=N/5;
            N /= 5;
        }
        return cnt;
    }
