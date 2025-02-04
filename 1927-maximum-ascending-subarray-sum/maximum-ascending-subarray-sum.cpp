class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int maxSum = 0;
        int sum = nums[0];

        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] > nums[i - 1])
            {
                sum += nums[i];
            }
            else
            {
                maxSum = std::max(maxSum, sum);
                sum = nums[i];
            }
        }
        return std::max(maxSum, sum);
    }
};