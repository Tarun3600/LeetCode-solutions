class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> mpp;
        unordered_set<int> set;
        for(int i=0;i<arr.size();i++)
        {
            mpp[arr[i]]++;
        }
        for(auto it = mpp.begin(); it != mpp.end(); ++it)
        {
            if(set.find(it->second) != set.end()) return false;

            set.insert(it->second);
        }
        return true;
    }
};