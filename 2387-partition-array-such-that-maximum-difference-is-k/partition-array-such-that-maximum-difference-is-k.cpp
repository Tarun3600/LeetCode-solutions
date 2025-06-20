class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int low = 0;
        int sub = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] - nums[low] > k)
            {  
                low = i;
                sub++;
            }
        }
        return sub + 1;
    }
};