class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        unordered_map<int, long long> f;
        long long n = nums.size();
        long long t = (n * (n - 1)) / 2;
        long long g = 0;

        for (int i = 0; i < n; i++) {
            int v = nums[i] - i;
            g += f[v];
            f[v]++;
        }

        return t - g;
    }
};
