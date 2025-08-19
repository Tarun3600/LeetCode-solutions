class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long sum = 0;
        long long track = 0;
        for(int i = 0;i<nums.size();i++)
        {
            if(nums[i] == 0)
            {
                track++;
            }
            else
            {
                sum += track * (track + 1) / 2;
                track = 0; 
            }
        }
        sum += track * (track + 1) / 2;
        return sum;
    }
};