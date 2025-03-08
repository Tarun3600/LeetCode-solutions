class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n = blocks.length();
        int whiteCount = 0, minChanges;

        for (int i = 0; i < k; i++) {
            if (blocks[i] == 'W') whiteCount++;
        }

        minChanges = whiteCount; 

        for (int i = k; i < n; i++) {
            if (blocks[i - k] == 'W') whiteCount--; 
            if (blocks[i] == 'W') whiteCount++;   
            minChanges = min(minChanges, whiteCount); 
        }

        return minChanges;
    }
};
