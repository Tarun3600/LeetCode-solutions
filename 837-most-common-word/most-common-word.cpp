class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        transform(paragraph.begin(), paragraph.end(), paragraph.begin(), ::tolower);
        unordered_map <string,int> mpp;
        vector<string> vec;
        string str = "";


        for(int i=0;i<paragraph.length();i++)
        {
            if(isalpha(paragraph[i]))
            {
                str += paragraph[i];
            }
            else
            {
                if(!str.empty())
                {
                vec.push_back(str);
                str = "";
                }
            }
        }
        if(!str.empty()) vec.push_back(str);

        for(int i=0;i<vec.size();i++)
        {
            if(find(banned.begin(),banned.end(),vec[i]) == banned.end())
            {
                mpp[vec[i]]++;
            }
        }

        int max = INT_MIN;
        string s;

        for(auto it = mpp.begin();it != mpp.end();it++)
        {
            if(it->second > max)
            {
            max = it->second;
            s = it->first;
            }
        }

        return s;

    }
};