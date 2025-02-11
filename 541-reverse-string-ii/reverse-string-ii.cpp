class Solution {
public:
    string reverseStr(string s, int k) {
        for(int i=0;i<s.length();i += (k*2))
        {
            int end = min(i + k, (int)s.size());
            reverse(s.begin() + i, s.begin() + end);
        }
        return s;
    }
};