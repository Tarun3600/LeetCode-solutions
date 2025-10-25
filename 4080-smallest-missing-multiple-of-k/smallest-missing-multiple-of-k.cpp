class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = 1; // m x n will be our formula
        bool flag = true;
        while(flag)
        {
            int multiple = k * n;
            auto it = find(nums.begin(),nums.end(),multiple);
            if(it == nums.end())
            {
                return multiple;
            } 
            else
            {
                n++;
            } 
        }
        return 0;
    }
};