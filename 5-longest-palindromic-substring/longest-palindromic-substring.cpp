class Solution {
public:

    bool isPalindrome(const string& s, int left, int right)
    {
        while(left<right)
        {
            if(s[left] != s[right])
            {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }

    string longestPalindrome(string s) {
        if(s.size() <= 1) return s;
        int max=0;
        string long_pal;
        for(int i=0;i<s.size();i++)
        {
            for(int j=i;j<s.size();j++)
            {
                if(isPalindrome(s,i,j) && j - i + 1 > max)
                {
                    max = j - i + 1;
                    long_pal = s.substr(i,j-i+1);
                }
            }
        }
        return long_pal;
    }
};