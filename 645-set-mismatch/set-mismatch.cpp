class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> result;
        sort(nums.begin(),nums.end());
        unordered_map<int,int> numberCount;

        for(int i=0;i<nums.size();i++)
        {
            numberCount[nums[i]]++;
        }
        for(auto it = numberCount.begin();it != numberCount.end();it++)
        {
            if(it->second == 2) 
            {
                result.push_back(it->first);
                break;
            }
        }
        for(int i=1;i<=nums.size();i++)
        {
            if(numberCount.find(i) == numberCount.end()) result.push_back(i);
        }
        return result;
    }
};