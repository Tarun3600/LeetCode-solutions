class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> even,odd;
        for(int i : nums)
        {
            if(i % 2 == 0)
            even.push_back(i);
            else
            odd.push_back(i);
        }
        int ptr=0;
        int ptr2=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i % 2 == 0)
            {
            nums[i] = even[ptr];
            ptr++;
            }
            else
            {
            nums[i] = odd[ptr2];
            ptr2++;
            }
        }
        return nums;
    }
};