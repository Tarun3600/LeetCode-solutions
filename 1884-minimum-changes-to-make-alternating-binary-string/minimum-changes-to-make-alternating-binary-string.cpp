class Solution {
public:
    int minOperations(string s) {
        string s1 = "";
        string s2 = "";
        bool flag = false;
        for(int i=0;i<s.size();i++)
        {
            if(flag)
            {
                s1 += '1';
                s2 += '0';
                flag =!flag;
            }
            else
            {
                s1 += '0';
                s2 += '1';
                flag = !flag;
            }
        }
        int cn1 = 0;
        int cn2 = 0;
        for(int i=0;i<s.size();i++)
        {
            if(s1[i] != s[i])
            {
                cn1++;
            }
            if(s2[i] != s[i])
            {
                cn2++;
            }
        }
        if(cn1 > cn2) return cn2;
        else return cn1;

        return 0;
    }
};