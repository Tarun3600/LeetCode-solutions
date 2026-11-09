class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i=0;i<arr1.size();i++)
        {
            int num = arr1[i];
            int check = 0;
            for(int j=0;j<arr2.size();j++)
            {
                if(abs(num - arr2[j]) > d)
                {
                    check++;
                }
            }
            if(check >= arr2.size()) count++;
        }
        return count;
    }
};