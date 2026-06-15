class Solution {
public:
    void sortColors(vector<int>& nums) {
        //bubble sort
        int n = nums.size();
        while(n > 1)
        {
            for(int i=0;i<n-1;i++)
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