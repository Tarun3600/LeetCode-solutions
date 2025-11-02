class Solution {
public:
    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        vector<vector<int>> grid(m,vector<int>(n,0));
        for(int i=0;i<guards.size();i++)
        {
            int x = guards[i][0];
            int y = guards[i][1];
            grid[x][y] = 2; //2 for a guard marking
        }

        for(int i=0;i<walls.size();i++)
        {
            int x = walls[i][0];
            int y = walls[i][1];
            grid[x][y] = 1; // 1 for wall marking 
        }

        for(auto &g : guards)
        {
            int x = g[0];
            int y = g[1];

            for(int j=x+1;j<m;j++) //for south direction
            {
                if(grid[j][y] == 1 || grid[j][y] == 2) break;
                grid[j][y] = 3;
            }

            for(int j=y+1;j<n;j++) //for east direction
            {
                if(grid[x][j] == 1 || grid[x][j] == 2) break;
                grid[x][j] = 3;
            }

            for(int j=y-1;j>=0;j--) //for west
            {
                if(grid[x][j] == 1 || grid[x][j] == 2) break;
                grid[x][j] = 3;
            }

            for(int j = x - 1;j>=0;j--)
            {
                if(grid[j][y] == 1 || grid[j][y] == 2) break;
                grid[j][y] = 3;
            }
        }


        int count = 0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j] == 0) count++;
            }
        }

        return count;
    }
};