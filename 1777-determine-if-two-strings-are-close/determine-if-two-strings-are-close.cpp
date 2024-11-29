class Solution {
public:
    bool closeStrings(string word1, string word2) {
        unordered_map<char,int> mpp1;
        unordered_map<char,int> mpp2;
        unordered_set<char> unique1, unique2;
        for (char c : word1) {
            mpp1[c]++;
            unique1.insert(c);
        }
        for (char c : word2) {
            mpp2[c]++;
            unique2.insert(c);
        }
        if (unique1 != unique2) return false;
        multiset<int> freq1, freq2;
        for (auto& pair : mpp1) freq1.insert(pair.second);
        for (auto& pair : mpp2) freq2.insert(pair.second);
        return freq1 == freq2;  
    }
};
