class Solution {
public:
    bool isPalindrome(int x) {
        int x2 = x;
        if(x < 0) return false;
        long long res = 0;
        while(x != 0)
        {
            int temp = x % 10;
            res = temp + res * 10;
            x = x / 10;
        }
        if(res == x2) return true;
        return false;
    }
};