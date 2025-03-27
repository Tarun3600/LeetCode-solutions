class Solution {
public:
    int minimumIndex(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }
        int maj = INT_MIN, majnum;
        for (auto& pair : mpp) {
            if (pair.second > maj) {
                maj = pair.second;
                majnum = pair.first;
            }
        }
        if (maj <= n / 2) return -1;
        int prefix_count = 0;
        int suffix_count = maj;  

        for (int i = 0; i < n; ++i) {
            if (nums[i] == majnum) {
                prefix_count++;
                suffix_count--;
            }
            if (prefix_count > (i + 1) / 2 && suffix_count > (n - (i + 1)) / 2) {
                return i;
            }
        }

        return -1;
    }
};

