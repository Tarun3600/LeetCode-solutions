class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int operations = 0;

        while(!is_sorted(nums.begin(),nums.end()))
        {
            int idx = 0;
            int minSum = INT_MAX;
            for(int i=0;i<nums.size() - 1; i++)
            {
                int sum = nums[i] + nums[i+1];
                if(sum < minSum) 
                {
                    minSum = sum;
                    idx = i;
                }
            }
            nums[idx] = minSum;
            nums.erase(nums.begin() + idx + 1);
            operations++;
        }
        return operations;
    }
};