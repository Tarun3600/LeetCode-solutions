class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i=0;i<nums.size();i++)
        {
            mpp[nums[i]]++;
        }

        int max = 0;
        int top;

        for(auto it = mpp.begin();it != mpp.end(); it++)
        { 
            if(it->second > max) 
            {
                max = it->second;
                top = it->first;
            }
        }

        return top;
    }
};