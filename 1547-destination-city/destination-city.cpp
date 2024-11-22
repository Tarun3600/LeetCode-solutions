class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> set;

        for(int i=0;i<paths.size();i++)
        {
            set.insert(paths[i][0]);
        }

        for(int i=0;i<paths.size();i++)
        {
            if(set.find(paths[i][1]) == set.end())
            {
                return paths[i][1];
            }
        }
        return "";
    }
};