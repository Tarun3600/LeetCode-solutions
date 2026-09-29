class Solution {
public:
    string reverseParentheses(string s) {
        stack<char> st_par;
        stack<int> st_index;
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == '(')
            {
                st_par.push('(');
                st_index.push(i);
            }
            else if(s[i] == ')')
            {
                int index = st_index.top();
                reverse(s.begin() + index, s.begin() + i);
                st_par.pop();
                st_index.pop();
            }
        }
        string result = "";
        for(char ch : s)
        {
            if(ch != '(' && ch != ')')
            result += ch;
        }
        return result;
    }
};