class Solution {
public:
    bool isValid(string s) {
        if(s.size() <= 1) return false;
        stack<char> st;
        for(char ch : s)
        {
            if(ch == '(' || ch == '{' || ch == '[')
            {
                st.push(ch);
            }
            
            if(ch == ')')
            {
                if(!st.empty() && st.top() == '(') st.pop();
                else return false;
            }
            else if(ch == '}')
            {
                if(!st.empty() && st.top() == '{') st.pop();
                else return false;
            }
            else if(ch == ']')
            {
                if(!st.empty() && st.top() == '[') st.pop();
                else return false;
            }
        }
        if(st.empty()) return true;
        else return false;
    }
};