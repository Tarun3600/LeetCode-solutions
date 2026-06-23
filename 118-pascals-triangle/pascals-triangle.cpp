class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({1});
        if(numRows == 1) return result;
        // if(numRows == 2) return [[1,1]];
        vector<int> prev;
        prev.push_back(1);
        prev.push_back(1);
        result.push_back(prev);
        for(int i=1;i<numRows-1;i++)
        {
            vector<int> temp;
            temp.push_back(1);
            for(int j=1;j<prev.size();j++)
            {
                int sum = prev[j] + prev[j-1];
                temp.push_back(sum);
            }
            temp.push_back(1);
            result.push_back(temp);
            prev = temp;
        }
        return result;
    }
};