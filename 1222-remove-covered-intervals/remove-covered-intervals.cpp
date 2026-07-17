class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        int count = 0;
        vector<bool> covered(intervals.size(), false);
        for(int i=0;i<intervals.size() - 1;i++)
        {
            vector<int> temp1 = intervals[i];
            for(int j=i+1;j<intervals.size();j++)
            {
                vector<int> temp2 = intervals[j]; //a = temp1[0] b = temp[1] 
                if((temp1[0] <= temp2[0] && temp1[1] >= temp2[1]))
                {   
                    covered[j] = true;
                }

                if((temp2[0] <= temp1[0] && temp2[1] >= temp1[1]))
                {
                    covered[i] = true; 
                }
            }   
        }
        for(bool x : covered)
        {
            if(!x)
            {
                count++;
            }
        }
        return count;
    }
};