class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int l = 0;
        int w = 0;
        double maxd = 0.0;
        int maxarea = 0;
        for(int i = 0;i<dimensions.size();i++)
        {
            double d = sqrt(dimensions[i][0] * dimensions[i][0] + dimensions[i][1] * dimensions[i][1]);
            int area = dimensions[i][0] * dimensions[i][1];
            if(maxd < d || (maxd == d && maxarea < area))
            {
                maxd = d;
                maxarea = area;
            }
        }
        return maxarea;
    }
};