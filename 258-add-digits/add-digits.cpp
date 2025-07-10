class Solution {
public:
    int addDigits(int num) {
        if(num < 10) return num;
        string s;
        s = to_string(num);
        int sum = 0;
        while(s.length() > 1){
        sum = 0;
        for(int i=0;i<s.length();i++)
        {
            int j = s[i] - '0';
            sum += j;
        }
        s = to_string(sum);
        }
        return sum;
    }
};