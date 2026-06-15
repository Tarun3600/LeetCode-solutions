class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = nums[0];
        if(nums.size() <= 1) return nums[0];
        int maxsum = INT_MIN;
        for(int i=1;i<nums.size();i++)
        {
            maxsum = max(maxsum,sum);
            if(sum < 0)
            {
                
                sum = 0;
            }
            sum += nums[i];
            maxsum = max(maxsum,sum);
        }
        return maxsum;
    }
};