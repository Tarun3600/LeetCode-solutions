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
            else if(nums[i] < nums[i-1])
            {
                if(maxSum < sum)
                maxSum = sum;
                sum = nums[i];
            }
            else
            {
                if(maxSum < sum) maxSum = sum;
                sum = nums[i];
            }
        }
        if(maxSum < sum) maxSum = sum;
        return maxSum;
    }
};