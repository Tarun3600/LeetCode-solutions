class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int count = 0;
        for(int num : nums)
        {
            if(num < k) return -1;
        }

        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        for(auto& it : mpp)
        {
            if(it.first != k) count++;
        }
        return count;
    }
};