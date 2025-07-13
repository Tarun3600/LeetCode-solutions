class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& players, vector<int>& trainers) {
        sort(players.begin(),players.end());
        sort(trainers.begin(),trainers.end());
        int i = 0;
        int count = 0;
        for(int j=0;j<trainers.size();j++)
        {
            if(i < players.size() && trainers[j] >= players[i])
            {
                i++;
                count++;
            }
        }
        return count;
    }
};