class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int sum = 0;
        int first = 0;
        int last = 0;
        while(first < colors.length())
        {
            char ch = colors[first];
            while(last < colors.length() && colors[last] == ch) last++;
            int maxs = 0;
            int temp_sum = 0;
            for(int j = first; j < last; j++)
            {
                temp_sum += neededTime[j];
                maxs = max(maxs,neededTime[j]);
            }
            sum += (temp_sum - maxs);
            first = last;
        }
        return sum;
    }
};