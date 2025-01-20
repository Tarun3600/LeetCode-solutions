class Solution {
public:
    int minSwaps(string s) {
        int bal = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '[')
            {
                bal++;
            }
            else if(bal > 0)
            {
                bal--;
            }
        }
        return (bal+1)/2;
    }
};