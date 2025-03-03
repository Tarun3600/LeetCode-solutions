class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] < pivot) temp.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == pivot) temp.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] > pivot) temp.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i] = temp[i];
        }
        return nums;
    }
};