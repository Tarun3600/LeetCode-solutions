class Solution {
public:
    string removeStars(string s) {
        stack<int> st;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '*')
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
            else
            {
                st.push(s[i]);
            }
        }
        string result;
        while(!st.empty())
        {
            char c = st.top();
            result += c;
            st.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};