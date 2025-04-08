class Solution {
private:
    bool helper(vector<int>& nums)
    {
        if(nums.empty()) return false;
        bool flag = false;
        unordered_set<int> numSet;
        for(int i=0;i<nums.size();i++)
        {
            if(numSet.find(nums[i]) != numSet.end())
            {
                flag = true;
                break;
            }
            numSet.insert(nums[i]);
        }
        return flag;
    }
public:
    int minimumOperations(vector<int>& nums) {
        // if(nums.empty()) return 0;
        // if(nums.size() <= 3) return 1;
        int count = 0;
        bool flag = true;
        while(flag)
        {
            flag = helper(nums);
            if(flag == true && nums.size() >= 3)
            {
                nums.erase(nums.begin(), nums.begin() + 3);
                count++;
            }
            else if(flag == true && nums.size() < 3) 
            {
                count++;
                break;
            }
        }
        return count;
    }
};