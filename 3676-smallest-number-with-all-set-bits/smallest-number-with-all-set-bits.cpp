class Solution {
public:
    int smallestNumber(int n) {
        string s = "";
        for(int i=0;i<10;i++)
        {
            s += "1";
            int n1 = stoi(s,0,2);

            if(n1 >= n) return n1;
        }
        return 0;
    }
};