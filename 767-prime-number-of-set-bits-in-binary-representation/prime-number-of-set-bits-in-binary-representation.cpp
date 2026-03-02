class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19};
        int count = 0;
        for(int x = left; x <= right; x++)
        {
            int n = x;
            int ones = __builtin_popcount(n);
            if (find(primes.begin(), primes.end(), ones) != primes.end())
            {
                count++;
            }
        }
        return count;
    }
};