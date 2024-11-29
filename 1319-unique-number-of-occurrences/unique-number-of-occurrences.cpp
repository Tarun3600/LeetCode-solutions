class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        unordered_set<int> set;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        vector<int> vec(arr.size() + 1,0);
        for(auto it : mpp)
        {
            if(vec[it.second] > 0) return false;

            vec[it.second]++; 
        }
        return true;
    }
};