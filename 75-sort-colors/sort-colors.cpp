class Solution {
public:
    void sortColors(vector<int>& nums) {
        //bubble sort
        int n = nums.size();
        while(n >= 0)
        {
            for(int i=0;i<nums.size() - 1;i++)
            {
                if(nums[i] > nums[i+1])
                {
                    swap(nums[i],nums[i+1]);
                }
            }
            n--;
        }
    }
};