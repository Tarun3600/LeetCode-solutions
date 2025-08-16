class Solution {
public:
    int maximum69Number (int num) {
        string str = to_string(num);
        int i = 0;
        while(str[i] == '9')
        {
            i++;
        }
        if(i < str.length()) str[i] = '9';
        int n = stoi(str);
        return n;
    }
};