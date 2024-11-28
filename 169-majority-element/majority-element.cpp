class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, candidate = 0;
        //Boyer Moore algo or smth
        for(int num : nums)
        {
            if(count == 0) candidate = num;

            if(candidate != num) count--;
            else if(candidate == num) count++; 
        }
        return candidate;
    }
};