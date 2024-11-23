class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_set <int> set;
        for(int i=0;i<nums2.size();i++)
        {
            set.insert(nums2[i]);
        }

        for(int i=0;i<nums1.size();i++)
        {
            if(set.find(nums1[i]) != set.end())
            {
                return nums1[i];
            }
        }
        return -1;
    }
};