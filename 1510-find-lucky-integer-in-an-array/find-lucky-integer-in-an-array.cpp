class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mpp;
        int count = 0;
        for(int num : arr)
        {
            mpp[num]++;
        }

        for(auto it : mpp)
        {
            if(it.first == it.second){
                int num = it.first;
                count = max(count,num);
            }
        }
        if(count == 0) return -1;
        else return count;
    }
};