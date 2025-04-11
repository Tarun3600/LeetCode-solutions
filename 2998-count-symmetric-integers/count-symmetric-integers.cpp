class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for(int i = low; i<=high;i++)
        {
            string s = to_string(i);
            if(s.length() % 2 != 0) continue;

            int n = s.length() / 2;

            string firsthalf = s.substr(0,n);
            string secondhalf = s.substr(n,n);
            int sum1 = 0;
            for(char ch : firsthalf) 
            {
                int digit = ch - '0';
                sum1 += digit;
            }
            int sum2 = 0;
            for(char ch : secondhalf) 
            {
                int digit = ch - '0';
                sum2 += digit;
            }
            if(sum1 == sum2) count++;
        }

        return count;
    }
};