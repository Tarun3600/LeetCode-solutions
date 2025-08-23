class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        int rows = matrix[0].size();
        int columns = matrix.size();

        vector<vector<int>> result;

        for(int i =0;i<rows;i++)
        {
            vector<int> temp;
            for(int j = 0;j < columns;j++)
            {
                temp.push_back(matrix[j][i]);
            }
            result.push_back(temp);
        }

        return result;
    }
};