class Solution {
public:
    string pushDominoes(string dominoes) {
        vector<char> dom(dominoes.begin(), dominoes.end());
        queue<pair<int, char>> q;

        for (int i = 0; i < dom.size(); ++i) {
            if (dom[i] != '.') {
                q.push({i, dom[i]});
            }
        }

        while (!q.empty()) {
            auto [i, d] = q.front();
            q.pop();

            if (d == 'L') {
                if (i > 0 && dom[i - 1] == '.') {
                    q.push({i - 1, 'L'});
                    dom[i - 1] = 'L';
                }
            } else if (d == 'R') {
                if (i + 1 < dom.size() && dom[i + 1] == '.') {
                    if (i + 2 < dom.size() && dom[i + 2] == 'L') {
                        q.pop();  // skip both
                    } else {
                        q.push({i + 1, 'R'});
                        dom[i + 1] = 'R';
                    }
                }
            }
        }

        return string(dom.begin(), dom.end());
    }
};
