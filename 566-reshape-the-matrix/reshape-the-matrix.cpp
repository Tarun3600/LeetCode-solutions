class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int columns = mat[0].size();
        vector<vector<int>> result;
        int rows = mat.size();
        vector<int> temp;
        if(columns * rows != r * c) return mat;
        for(int i=0;i<rows;i++)
        {
            for(int j = 0;j<columns;j++)
            {
                temp.push_back(mat[i][j]);
            }
        }

        
        int index = 0;
        for(int i = 0; i < r;i++)
        {
            vector<int> temp2;
            for(int j = 0;j < c; j++)
            {
                temp2.push_back(temp[index]);
                index++;
            }
            result.push_back(temp2);
        }
        return result;
    }
};