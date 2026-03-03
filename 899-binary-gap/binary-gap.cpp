class Solution {
public:
    int binaryGap(int n) {
        string binary = "";
        while(n > 0)
        {
            int rem = n % 2;
            binary = char(rem + '0') + binary;
            n = n / 2;
        }

        int last = -1;
        int maxd = 0;
        
        for(int i = 0; i < binary.size(); i++)
        {
            if(binary[i] == '1')
            {
                if(last != -1)
                {
                    int dist = i - last;
                    if(dist > maxd)
                    {
                        maxd = dist;
                    }
                }
                last = i;
            }
        }

        return maxd;
    }
};