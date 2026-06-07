class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int left = 0;
        int best = 0;
        long long windowSum = 0;
        for(int right= 0;right < nums.size();right++)
        {
            windowSum += nums[right];
            long long cost = (long long)nums[right] * (right - left + 1) - windowSum;

            if(cost > k)
            {
                windowSum -= nums[left];
                left++;
            }
            best = max(best, right - left + 1);
        }
        return best;
    }
};