class Solution {
public:
    bool checkPowersOfThree(int n) {
        int num = 1;
        while(num * 3 <= n)
        {
            num *= 3;
        }
        
        while(n > 0 && num > 0)
        {
            if(n >= num) n = n - num;

            num = num / 3;
        }

        return n == 0;
    }
};