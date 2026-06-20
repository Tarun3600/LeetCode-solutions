class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> pos; //to record the columns to put 0s in
        for(int i=0;i<matrix.size();i++)
        {
            bool flag = false;
            for(int j=0;j<matrix[i].size();j++)
            {
                if(matrix[i][j] == 0)
                {
                    pos.push_back(j);
                    flag = true;
                }
            }
            if(flag == true)
            {
                for(int j=0;j<matrix[i].size();j++) //setting everything to 0
                {
                    matrix[i][j] = 0;
                }
            }
        }


        for(int i=0;i < matrix.size();i++)
        {
            for(int j = 0;j<pos.size();j++)
            {
                matrix[i][pos[j]] = 0; 
            }
        }
    }
};