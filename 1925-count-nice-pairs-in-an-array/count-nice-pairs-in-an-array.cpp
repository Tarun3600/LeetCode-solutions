class Solution {
private:
    int rev(int x)
    {
        int newnum = 0;
        while(x != 0)
        {
            int temp = x % 10;
            newnum = temp + newnum * 10;
            x = x / 10;
        }
        return newnum;
    }
public:
    const int MOD = 1e9 + 7;
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mpp;
        long long count = 0;

        for(int num : nums)
        {
            int diff = num - rev(num);
            count = (count + mpp[diff]) % MOD;
            mpp[diff]++;
        }

        return count;


    }
};