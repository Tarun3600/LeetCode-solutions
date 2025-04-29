class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, sum = 0, res = 0, final = INT_MAX;
        for(int right = 0; right < nums.size(); right ++)
        {
            sum += nums[right];
            while(sum >= target)
            {
                res = (right - left) + 1;
                if(res < final) final = res;
                sum -= nums[left];
                left++;
            }
        }
        if(res < final) final = res;
        return final;
    }
};