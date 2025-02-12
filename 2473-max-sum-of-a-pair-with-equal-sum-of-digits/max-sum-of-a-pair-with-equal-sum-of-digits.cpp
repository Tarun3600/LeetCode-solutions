class Solution {
public:
    int maximumSum(vector<int>& nums) {
        unordered_map <int,vector<int>> mpp;
        for(int num : nums)
        {
            int sum = 0;
            int originalNum = num;
            while(num != 0)
            {
                int temp = num % 10;
                sum += temp;
                num /= 10;
            }
            mpp[sum].push_back(originalNum);
        }

        int maxsum = -1;

        for(auto& it : mpp)
        {
            vector<int> temp = it.second;
            if(temp.size() < 2) continue;

            sort(temp.begin(),temp.end(),greater<int>());

            int curr = temp[0] + temp[1];

            maxsum = max(maxsum, curr);
        }

        return maxsum;
    }
};