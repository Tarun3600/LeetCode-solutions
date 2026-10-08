class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        stack<int> ind;
        string result;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st.push('(');
                ind.push(i);
            }
            else 
            {
                if(st.size() > 1)
                {
                    st.pop();
                    ind.pop();
                }
                else if(st.size() == 1)
                {
                    st.pop();
                    result += s.substr(ind.top() + 1, i - ind.top() - 1);
                    ind.pop();
                }
            }
        }
        return result;
    }
};