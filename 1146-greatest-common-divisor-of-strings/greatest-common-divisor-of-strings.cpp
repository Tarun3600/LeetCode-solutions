class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n1 = str1.size();
        int n2 = str2.size();
        string result = ""; 
        if(str1 + str2 == str2 + str1)
        {
            string temp = str1 + str2;
            int n = gcd(n1,n2);
            result = temp.substr(0,n);
            return result;
        }
        else
        {
            return "";
        }

        return "";
    }
};