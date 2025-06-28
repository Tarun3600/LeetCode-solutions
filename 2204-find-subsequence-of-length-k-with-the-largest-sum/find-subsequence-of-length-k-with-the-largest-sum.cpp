class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int, int>> v;

        for(int i=0;i<nums.size();i++)
        {
            v.push_back({nums[i],i});
        }

        sort(v.begin(),v.end(), greater<>());

        vector<pair<int, int>> top(v.begin(), v.begin() + k);

        sort(top.begin(), top.end(), [](auto &a, auto &b) {
            return a.second < b.second;
        });

        vector<int> ans;
        for (auto &p : top)
            ans.push_back(p.first);

        return ans;
    }
};