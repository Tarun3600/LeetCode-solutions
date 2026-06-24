class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> result;
        
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }
        int n = nums.size();
        // if(n < 3) return nums;
        for(auto it : mpp)
        {
            if(it.second > (n / 3))
            {
                result.push_back(it.first);
            }
        }
        return result;
    }
};