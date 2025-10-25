class Solution {
public:
    int totalMoney(int n) {
        int count = 0;
        int daycount = 0;
        int weekly = 1;
        int c = 1;
        for(int i=0;i<n;i++)
        {
            if(daycount == 7)
            {
                daycount = 0;
                c = weekly + 1;
                weekly++;
            }
            daycount++;
            count = count + c;
            c++;
        }
        return count;
    }
};