class Solution {
public:
    int findLHS(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;// i is start
        int maxcount = 0;
        for(int j=0;j<nums.size();j++) //j is end
        {
            while(nums[j] - nums[i] > 1)
            {
                i++;
            }
            if(nums[j] - nums[i] == 1)
            {
                maxcount = max(maxcount,j-i + 1);
            }
        }
        return maxcount;
    }
};