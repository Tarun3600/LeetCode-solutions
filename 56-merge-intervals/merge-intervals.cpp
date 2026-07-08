class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> result;

        int i = 0;

        for (int j = 0; j < intervals.size(); j++)
        {
            while (j < intervals.size() - 1 &&
                   intervals[j][1] >= intervals[j + 1][0])
            {
                intervals[j + 1][1] = max(intervals[j][1], intervals[j + 1][1]);
                j++;
            }

            vector<int> temp;
            temp.push_back(intervals[i][0]);
            temp.push_back(intervals[j][1]);
            result.push_back(temp);

            i = j + 1;
        }

        return result;
    }
};