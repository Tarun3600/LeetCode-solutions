class Solution {
public:
    long long sumAndMultiply(int n) {
        string s = to_string(n);
        string temp = "";
        bool flag = false;
        int sum = 0;
        for(char c : s)
        {
            if(c != '0')
            {
            temp += c;
            sum += c - '0';
            flag = true;
            }
        }
        if(temp.empty()) return 0;
        long long x = stoi(temp);
        if(!flag) x = 0;
        return x * sum;
        
    }
};