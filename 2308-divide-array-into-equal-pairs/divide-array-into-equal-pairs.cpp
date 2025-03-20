class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int,int> mpp;
        int n = nums.size();
        if(n % 2 != 0) return false;

        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }

        for(const auto& it : mpp)
        {
            if(it.second % 2 != 0) return false;
        }

        return true;
    }
};