class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_set<int> st;
        vector<int> result(2);
        int count = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(st.count(nums[i]) == 0)
            {
                st.insert(nums[i]);
            }
            else
            {
                result[count] = nums[i];
                count++;
            }
        }
        return result;
    }
};