class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n = 1; // m x n will be our formula
        unordered_set<int> st(nums.begin(),nums.end());
        bool flag = true;
        while(flag)
        {
            int multiple = k * n;
            if(!st.count(multiple))
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