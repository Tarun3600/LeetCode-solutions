class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mpp;
        for(int i=0;i<text.size();i++)
        {
            mpp[text[i]]++;
        }
        int count = 0;
        int b = mpp['b'];
        int a  = mpp['a'];
        int l  = mpp['l'] / 2; 
        int o  = mpp['o'] / 2;
        int n  = mpp['n'];

        int min_num = b;

         min_num = min(min_num,a);
         min_num = min(min_num,l);
         min_num = min(min_num,o);
         min_num = min(min_num,n);

        return min_num;
    }
};