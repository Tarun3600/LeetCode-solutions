class Solution {
public:
    bool hasAlternatingBits(int n) {
        string binary = "";
    while (n > 0)
    {
        binary = char((n & 1) + '0') + binary;
        n = n >> 1;
    }

    bool flag = true;
    for (int i = 1; i < binary.size(); i++)
    {
        if (binary[i - 1] == binary[i])
        {
            flag = false;
            break;
        }
    }

    return flag;
    }
};