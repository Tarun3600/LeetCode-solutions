class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> result;
        for(int i=0;i<nums.size();i++)
        {
            int n = nums[nums[i]];
            result.push_back(n);
        }
        return result;
    }
};