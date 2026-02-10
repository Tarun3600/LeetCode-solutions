class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int l = 0;
        for(int r = 0; r < nums.size(); r++)
        {
            if(l < nums.size() && nums[l] == 0 && nums[r] != 0) swap(nums[l],nums[r]);
            if(nums[l] != 0) l++;
        }
    }
};