class Solution {
public:
    int strStr(string haystack, string needle) {
        int len1 = needle.length();
        int len2 = haystack.length();

        for(int i = 0; i <= len2 - len1; i++) {
            if(haystack.substr(i, len1) == needle) {  
                return i;
            }
        }
        return -1;
    }
};
