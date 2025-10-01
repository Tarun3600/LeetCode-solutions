class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int extra = 0;
        int count = numBottles;
        while(numBottles >= numExchange)
        {
            int n = numBottles / numExchange;
            extra = numBottles % numExchange;
            count += n;
            numBottles = n + extra;
        }
        return count;
    }
};