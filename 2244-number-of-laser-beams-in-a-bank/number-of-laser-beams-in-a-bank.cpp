class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        //devices multiplication
        vector<int> countDevices;
        for(int i=0;i<bank.size();i++)
        {
            int count = 0;
            for(int j=0;j<bank[i].length();j++)
            {
                if(bank[i][j] == '1')
                count++;
            }
            if(count != 0) countDevices.push_back(count);
        }
    int result = 0;

    if (countDevices.size() < 2)
            return 0;

            
    for(int i=0;i<countDevices.size() - 1;i++)
    {
        result += countDevices[i] * countDevices[i+1];
    }
    return result;
    }
};