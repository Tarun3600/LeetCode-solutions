class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        //generate a power set first
        vector<vector<int>> subsets;
        int n = nums.size();
        for(int mask = 0; mask < (1 << n); ++mask)
        {
            vector<int> subset;
            for(int i=0;i<n;i++)
            {
                if(mask & (1 << i))
                {
                    subset.push_back(nums[i]);
                }
            }
            subsets.push_back(subset);
        }
        int sum = 0;
        for(int i=0;i<subsets.size();i++)
        {
            int xorVal = 0;
            for(int j=0;j<subsets[i].size();j++)
            {
                xorVal ^= subsets[i][j];
            }
            sum += xorVal;
        }

        return sum;
    }
};