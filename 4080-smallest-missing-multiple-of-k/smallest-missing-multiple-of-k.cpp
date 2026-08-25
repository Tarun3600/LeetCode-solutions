class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for(int i=1;i<10000;i++)
        {
            int multi = i * k;
            if(find(nums.begin(),nums.end(),multi) == nums.end())
            {
                return multi;
            }
        }
        return -1;
    }
};