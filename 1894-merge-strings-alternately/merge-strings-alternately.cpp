class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n = 0;
        if(word1.size() > word2.size()) n = word1.size();
        else n = word2.size();

        string result = "";
        for(int i=0;i<n;i++)
        {
            if(word1.size() > i) result += word1[i];
            if(word2.size() > i) result += word2[i];
        }

        return result;

    }
};