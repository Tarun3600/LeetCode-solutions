class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        for(int i=0;i<nums.size() - 1;i++)
        {
            for(int j = i;j<nums.size();j++)
            {
                if(nums[j] % 2 == 0 && nums[i] % 2 != 0)
                {
                    swap(nums[j],nums[i]);
                }
            }
        }
        return nums;
    }
};