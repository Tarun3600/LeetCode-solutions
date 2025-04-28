class Solution {
public:
    int numRabbits(vector<int>& answers) {
        unordered_map<int,int> freq;
        int count = 0;
        for(int i=0;i<answers.size();i++)
        {
            if(answers[i] == 0) count++;
            else
            {
                freq[answers[i]]++;
                if(freq[answers[i]] == answers[i] + 1)
                {
                count += answers[i] + 1;
                freq[answers[i]] = 0;
                }
            }
        }

        for(auto [group,rem]: freq)
            if(rem > 0) count += group+1;

        return count;
    }
};