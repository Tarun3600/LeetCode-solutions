class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int> result;
        result.push_back(0);
        int maxalt = 0;
        for(int i=0;i<gain.size();i++)
        {
            int last = result.back();
            int temp = last + gain[i];
            maxalt = max(temp,maxalt);
            result.push_back(last+gain[i]);
        }
        return maxalt;
    }
};