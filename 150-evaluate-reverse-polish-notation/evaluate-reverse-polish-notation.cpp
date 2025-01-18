class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int val = 0;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/")
            {
                int temp1 = st.top();
                st.pop();
                int temp2 = st.top();
                st.pop();
                if(tokens[i] == "+")
                {
                    val = temp1 + temp2;
                }
                else if(tokens[i] == "/")
                {
                    val = temp2 / temp1;
                }
                else if(tokens[i] == "*")
                {
                    val = temp1 * temp2;
                } 
                else
                {
                    val = temp2 - temp1;
                }
                st.push(val);
            }
            else
            {
                int number = stoi(tokens[i]);
                st.push(number);
            }
        }
        return st.top();
    }
};