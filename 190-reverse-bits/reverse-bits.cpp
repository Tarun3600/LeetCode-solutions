class Solution {
public:
    int reverseBits(int n) {
        int bits[32];
        for(int i = 0; i < 32; i++)
        {
            bits[i] = n & 1;
            n = n >> 1;
        }
        
        int result = 0;

        for(int i = 0; i < 32; i++)
        {
            result = (result << 1) | bits[i];
        }

        return result;
    }
};