class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return 0;
        vector<int> leftMax(n,0);
        vector<int> rightMax(n,0);
        leftMax[0] = nums[0];
        for(int i=1;i<n;i++)
        {
            int val = nums[i];
            leftMax[i] = max(val,leftMax[i-1]);
        }
        rightMax[n-1] = nums[n-1];
        for(int i = n - 2; i >= 0; i--)
        {
            int val = nums[i];
            rightMax[i] = max(val,rightMax[i+1]);
        }

        long long ans = 0;
        for(int i=1;i<n-1;i++)
        {
            int left = leftMax[i-1];
            int right = rightMax[i+1];
            ans = max(ans, (long long)(left - nums[i]) * right);
        }

        return ans;
    }
};