class Solution {
public:
    string reversePrefix(string word, char ch) {
        string result;
        stack<int> st;
        int ind = -1;
        for(int i=0;i<word.size();i++)
        {
            if(word[i] == ch)
            {
                ind = i;
                st.push(word[i]);
                break;
            }
            st.push(word[i]);
        }
        if(ind == -1) return word;
        word = word.substr(ind + 1);
        while(!st.empty())
        {
            result += st.top();
            st.pop();
        }
        return result + word;  
    }
};