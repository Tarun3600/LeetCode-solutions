class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() <= 1) return nums.size();
        sort(nums.begin(),nums.end());
        int max_length = 1;
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - 1 == nums[i-1])
            {
                count++;
            }
            else
            {
                if(count > max_length) max_length = count;
                count = 1;
            }
        }
        if(count > max_length) max_length = count;
        return max_length;
    }
};