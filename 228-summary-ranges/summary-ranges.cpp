class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if (nums.size() == 1) return {to_string(nums[0])}; 
        if (nums.size() == 0) return {}; 

        int anchor = 0;
        vector<string> result;
        for(int i=0;i<nums.size();i++)
        {
            if(i + 1 == nums.size() || nums[i] + 1 != nums[i + 1])
            {
                if(anchor == i)
                {
                    result.push_back(to_string(nums[i]));
                }
                else
                {
                result.push_back(to_string(nums[anchor]) + "->" + to_string(nums[i]));
                }
                anchor = i+1;
            }
        }
        return result;
    }
};