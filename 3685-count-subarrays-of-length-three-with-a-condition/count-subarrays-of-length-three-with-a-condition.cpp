class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count = 0;
        for(int i=2;i<nums.size();i++)
        {
            int low = nums[i-2];
            int mid = nums[i-1];
            int high = nums[i];

            int sum = (low + high) * 2;

            if(sum == mid) count++;
        }
        return count;
    }
};