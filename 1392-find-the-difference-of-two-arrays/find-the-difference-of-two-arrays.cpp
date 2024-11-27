class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> result(2);
        unordered_set<int> set1(nums1.begin(),nums1.end());
        unordered_set<int> set2(nums2.begin(),nums2.end());

        for(int i=0;i<nums1.size();i++)
        {
            if(set2.find(nums1[i]) == set2.end())
            {
                if(find(result[0].begin(),result[0].end(),nums1[i]) == result[0].end())
                result[0].push_back(nums1[i]);
            }
        }

        for(int i=0;i<nums2.size();i++)
        {
            if(set1.find(nums2[i]) == set1.end())
            {
                if(find(result[1].begin(),result[1].end(),nums2[i]) == result[1].end())
                result[1].push_back(nums2[i]);
            }
        }
        return result;
    }
};