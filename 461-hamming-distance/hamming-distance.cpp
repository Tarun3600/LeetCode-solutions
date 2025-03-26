class Solution {
public:
    int hammingDistance(int x, int y) {
        std::bitset<32> binary(x);
        std::bitset<32> binary2(y);
        string b1 = binary.to_string();
        string b2 = binary2.to_string();
        int count = 0;
        for(int i=0;i<b1.length();i++)
        {
            if(b1[i] != b2[i]) count++;
        }

        return count;
    }
};