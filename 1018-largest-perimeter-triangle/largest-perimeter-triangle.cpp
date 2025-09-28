class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater<>());
        int first = 1;
        int second = 2;
        int third = 0;
        int max_per = 0;
        while(second < nums.size())
        {
            if(nums[first] + nums[second] > nums[third])
            {
                int per = nums[first] + nums[second] + nums[third];
                if(max_per < per)
                max_per = per;
            }
            first++;
            second++;
            third++;
        }
        return max_per;
    }
};