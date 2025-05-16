class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        vector<string> result;
        int n = groups.size();
        vector<int> ind(n,0);
        int l = 0;
        ind[0] = 1;
        for(int r = 1; r < groups.size(); r++)
        {
            if(groups[l] != groups[r])
            {
                l = r;
                ind[r] = 1;
            }
        }
        for(int i=0;i<groups.size();i++)
        {
            if(ind[i] != 0) result.push_back(words[i]);
        }
        return result;
    }
};