class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<bool> isPrime(right + 1, true);
        isPrime[0] = isPrime[1] = false;
        vector<int> res;
        for(int i=2; i * i <= right; i++)
        {
            if(isPrime[i]) 
            {
                for(int j = i * i;j <= right; j+=i)
                {
                    isPrime[j] = false;
                }
            }
        }

        for(int i = left; i <= right ; i++)
        {
            if(isPrime[i]) res.push_back(i);
        }
        
        if(res.size() < 2) return {-1,-1};

        int minDif = INT_MAX;
        vector<int> final(2,-1);

        for(int i=1;i<res.size();i++)
        {
            int diff = res[i] - res[i-1];
            if(diff < minDif)
            {
                minDif = diff;
                final[0] = res[i-1];
                final[1] = res[i];
            }
        }

        return final;

    }
};