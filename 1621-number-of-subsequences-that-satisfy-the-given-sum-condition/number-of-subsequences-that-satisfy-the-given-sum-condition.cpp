class Solution {
public:
    int numSubseq(vector<int>& nums, int target) {
        const int mod = 1e9 + 7;
        int n = nums.size();
        sort(nums.begin(), nums.end());

        
        vector<int> pow2(n);
        pow2[0] = 1;
        for (int i = 1; i < n; ++i) {
            pow2[i] = (pow2[i - 1] * 2) % mod;
        }

        int i = 0, j = n - 1;
        int result = 0;

        while (i <= j) {
            if (nums[i] + nums[j] <= target) {
                result = (result + pow2[j - i]) % mod;
                i++;
            } else {
                j--;
            }
        }

        return result;
    }
};
