class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        string result;
        for(int i=0;i<s.length();i++)
        {
            if(isalpha(s[i])) st.push(s[i]);
            else
            {
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }
    while(!st.empty())
    {
        result += st.top();
        st.pop();
    }
    reverse(result.begin(),result.end());
    return result;
    }
};