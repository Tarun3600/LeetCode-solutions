class Solution {
    int MOD = 1000000007;

    long long helper(long long a, long long b)
    {
        long long res = 1;
        while(b != 0)
        {
            if(b % 2 != 0) res = res * a % MOD; //adding the extra number
            a = a * a % MOD;
            b = b / 2;
        }
        return res;
    }

public:
    int countGoodNumbers(long long n) {
        return (helper(4,n/2) * helper(5,n-n/2)) % MOD;
    }
};