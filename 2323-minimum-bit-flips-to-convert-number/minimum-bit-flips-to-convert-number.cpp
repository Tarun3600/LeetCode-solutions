class Solution {
public:
    int minBitFlips(int start, int goal) {
        std::bitset<32> binary(start);
        std::bitset<32> binary2(goal);
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