class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char, string> mpp = {
        {'a', ".-"}, {'b', "-..."}, {'c', "-.-."}, {'d', "-.."},
        {'e', "."}, {'f', "..-."}, {'g', "--."}, {'h', "...."},
        {'i', ".."}, {'j', ".---"}, {'k', "-.-"}, {'l', ".-.."},
        {'m', "--"}, {'n', "-."}, {'o', "---"}, {'p', ".--."},
        {'q', "--.-"}, {'r', ".-."}, {'s', "..."}, {'t', "-"},
        {'u', "..-"}, {'v', "...-"}, {'w', ".--"}, {'x', "-..-"},
        {'y', "-.--"}, {'z', "--.."}};
        unordered_set<string> st;
        int count = 0;
        for(int i=0;i<words.size();i++)
        {
            string s = words[i];
            string newword = "";
            for(int j=0;j<s.length();j++)
            {
                newword += mpp[s[j]];
            }
            if(st.find(newword) == st.end())
            {
                count++;
                st.insert(newword);
            }
        }
        return count;
    }
};