class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        unordered_map<char,int> mpp;
        for(int i=0;i<s1.size();i++)
        {
            mpp[s1[i]]++;
            mpp[s2[i]]++;
        }

        for(const auto& pair : mpp)
        {
            if(pair.second % 2 != 0) return false;
        }

        vector<int> indexes;
        for(int i=0;i<s1.length();i++)
        {
            if(s1[i] != s2[i]) indexes.push_back(i);
        }

        if(indexes.empty()) return true;

        if(indexes.size() == 2)
        {
            int i = indexes[0];
            int j = indexes[1];

            if(s1[i] == s2[j] && s2[i] == s1[j])
            return true;
        }

        return false;

    }
};