class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for(int i=0;i<asteroids.size();i++)
        {
            if(st.empty() || asteroids[i] > 0)
            {
                st.push(asteroids[i]);
            }
            else
            {
                bool flag = false;
                while(!st.empty() && st.top() > 0)
                {
                    if(abs(asteroids[i]) > st.top()) 
                    {
                        st.pop();
                    }
                    else if(abs(asteroids[i]) < st.top())
                    {
                        break;
                    }
                    else
                    {
                        st.pop();
                        flag = true;
                        break;
                    }
                }
                if(flag == false)
                {
                if (st.empty() || st.top() < 0) {
                    st.push(asteroids[i]);
                }  
            }
            }
        }
        vector<int> result;
        while(!st.empty())
        {
            result.push_back(st.top());
            st.pop();
        }
        reverse(result.begin(), result.end()); 
        return result;
    }
};