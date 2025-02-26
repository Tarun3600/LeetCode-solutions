class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
        int currSum = 0;

        int maxSum = 0;
        int minSum = 0;

        for(int i=0;i<nums.size();i++)
        {
            currSum = nums[i] + currSum;

            if(currSum > maxSum) maxSum = currSum;
            if(currSum < minSum) minSum = currSum;
        }
        return abs(maxSum-minSum);
    }
};