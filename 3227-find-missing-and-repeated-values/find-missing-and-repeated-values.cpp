class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        set <int> st;
        vector<int> res;
        int n = grid.size();
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(st.find(grid[i][j]) != st.end())
                {
                    res.push_back(grid[i][j]);
                }
                st.insert(grid[i][j]);
            }
        }

        for(int i=1;i <=n * n;i++)
        {
            if(st.find(i) == st.end()) res.push_back(i);
        }

        return res;
    }
};