class Solution {
public:
    int smallestNumber(int n, int t) {
        bool flag = true;
        while(flag)
        {
            int num = n;
            int prod = 1;
            while(num > 0)
            {
                int temp = num % 10;
                prod *= temp;
                num /= 10;
            }
            if(prod % t == 0) return n;
            n++;
        }
        return -1;
    }
};