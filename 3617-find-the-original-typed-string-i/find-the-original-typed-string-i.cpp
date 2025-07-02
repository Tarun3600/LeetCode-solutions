class Solution {
public:
    int possibleStringCount(string word) {
        int count = 0;
        unordered_set<char> st;
        for(int i=0;i<word.length()-1;i++)
        {
            if(word[i] == word[i+1])
            {
                count++;
            }
        }
        count = count + 1;
        return count;
    }
};