class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> result;
        int pos = 1;
        int neg = -1;
        bool flag = true;
        while(n > 1)
        {
            result.push_back(pos);
            result.push_back(neg);
            pos++;
            neg--;
            n -=2;
        }
        if(n == 1) result.push_back(0);
        return result;
    }
};