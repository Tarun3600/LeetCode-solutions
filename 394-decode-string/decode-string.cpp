class Solution {
public:
    string decodeString(string s) {
        stack<string> st;
        for(char c : s)
        {
            if(c != ']')
            {
                st.push(string(1, c));
            }
            else
            {
                string temp = "";
                while(st.top() != "[")
                {
                    temp = st.top() + temp;
                    st.pop();
                }
                st.pop();
                string num = "";
                while(!st.empty() && isdigit(st.top()[0]))
                {
                    num = st.top() + num;
                    st.pop();
                }
                string rep = "";
                int numb = std::stoi(num);
                for(int i=0;i<numb;i++)
                {
                    rep+=temp;
                }
                st.push(rep);
            }
        }
        string result = "";
        while(!st.empty()) {
            result = st.top() + result; 
            st.pop();
        }
        
        return result;
    }
};