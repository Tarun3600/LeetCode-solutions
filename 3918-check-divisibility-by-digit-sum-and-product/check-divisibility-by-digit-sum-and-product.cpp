class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int temp = n;
        while(temp > 0)
        {
            int temp2 = temp % 10;
            sum += temp2;
            prod *= temp2;
            temp /= 10;
        }

        sum += prod;
        if(n % sum == 0)
        return true;
        else return false; 
    }
};