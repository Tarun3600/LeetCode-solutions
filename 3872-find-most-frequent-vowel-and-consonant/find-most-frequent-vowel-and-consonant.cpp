class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int> freq_v;
        unordered_map<char,int> freq_c;
        for(char c : s)
        {
            if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') freq_v[c]++;
            else freq_c[c]++;
        }

        int max_v = 0;
        int max_c = 0;
        for(auto c : freq_v)
        {
            if(c.second > max_v) max_v = c.second;
        }

        for(auto c : freq_c)
        {
            if(c.second > max_c) max_c = c.second;
        }
        
        return max_c + max_v;
    }
};