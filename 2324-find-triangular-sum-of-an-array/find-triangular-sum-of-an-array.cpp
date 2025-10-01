class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while(nums.size() > 1)
        {
            vector<int> temp;
            for(int i = 1;i<nums.size();i++)
            {
                int a = nums[i-1];
                int b = nums[i];
                int sum = (a+b) % 10;
                temp.push_back(sum);
            }
            nums = temp;
        }
        return nums[0];
    }
};