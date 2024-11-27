class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mpp;
        
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        int max=0;

        for(auto it = mpp.begin();it != mpp.end();it++)
        {
            int key = it->first;
            int val = it->second;
            if(mpp.find(key+1) != mpp.end())
            {
                int l = val + mpp[key+1];
                if(l > max) max = l;
            }
        }
        return max;
    }
};