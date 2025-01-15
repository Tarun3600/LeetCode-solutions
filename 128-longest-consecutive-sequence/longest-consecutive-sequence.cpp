class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet (nums.begin(),nums.end());
        int max_length = 0;

        for(int num : numSet)
        {
            if(numSet.find(num - 1) == numSet.end())
            {
                int current_num = num;
                int count = 1;

                while(numSet.find(current_num + 1) != numSet.end())
                {
                    current_num++;
                    count++;
                }

                max_length = max(max_length,count);
            }
        }
        return max_length;
    }
};