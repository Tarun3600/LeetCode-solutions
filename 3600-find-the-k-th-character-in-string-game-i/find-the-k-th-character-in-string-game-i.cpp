class Solution {
public:
    char kthCharacter(int k) {
        string s = "a";
        while(s.length() < k)
        {
            string newword;
            for(int i=0;i<s.length();i++)
            {
               newword += s[i];
               char ch;
               if(s[i] != 'z')  ch = s[i] + 1;
               else  ch = 'a';
               newword += ch;
            }
            s = newword;
        }
        return s[k-1];
    }
};