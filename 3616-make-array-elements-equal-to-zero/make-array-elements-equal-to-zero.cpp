class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        int result = 0;
        for(int i=0;i<nums.size();i++)
        {
            int count_left = 0;
            int count_right = 0;
            if(nums[i]==0)
            {

                for(int j=0;j<i;j++)
                {
                    count_right+=nums[j];
                }

                for(int j=i;j<nums.size();j++)
                {
                    count_left+=nums[j];
                }

                if(count_left == count_right)
                {
                    result += 2;
                    
                }

                if(count_left - 1 == count_right || count_right - 1 == count_left)
                {
                    result += 1;
                }
            }
        }
        return result;
    }
};