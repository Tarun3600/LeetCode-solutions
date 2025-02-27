class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        if (arr.size() <= 2) return 0;
        unordered_set<int> st(arr.begin(),arr.end());
        int maxLen=0;
        
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                int first = arr[i];
                int second = arr[j];
                int len = 2;
                while(st.find(first+second) != st.end())
                {
                    len++;
                    maxLen = max(maxLen,len);
                    int temp = second;
                    second = first + second;
                    first = temp;
                }
            }
        }
        return maxLen > 2 ? maxLen : 0;
    }
};