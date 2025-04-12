class Solution {
public:
    int scoreOfString(string s) {
        vector<int> n;
        for(int i=0;i<s.length();i++)
        {
            int asciival = (int)s[i];
            n.push_back(asciival);
        }
        int sumVal=0;
        for(int i=1;i<n.size();i++)
        {
            int sum = abs(n[i-1] - n[i]);
            sumVal += sum;
        }
        return sumVal;
    }
};