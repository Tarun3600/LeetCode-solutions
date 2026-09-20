class Solution {
public:
    int reverseDegree(string s) {
        unordered_map<char,int> mpp;
        char ch = 'a';
        for(int i = 26; i >= 1; i--)
        {
            mpp[ch++] = i;
        }
        int result = 0;
        for(int i=0;i<s.size();i++)
        {
            int temp = mpp[s[i]];
            result += temp * (i + 1);
        }
        return result;
    }
};