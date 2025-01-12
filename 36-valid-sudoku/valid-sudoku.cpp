class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            unordered_set<char> seen;
            for (int j = 0; j < 9; j++) {
                char current = board[i][j];
                if (current != '.' && seen.find(current) != seen.end()) {
                    return false;
                }
                seen.insert(current);
            }
        }

        for (int j = 0; j < 9; j++) {
            unordered_set<char> seen;
            for (int i = 0; i < 9; i++) {
                char current = board[i][j];
                if (current != '.' && seen.find(current) != seen.end()) {
                    return false;
                }
                seen.insert(current);
            }
        }

        for (int boxRow = 0; boxRow < 9; boxRow += 3) {
            for (int boxCol = 0; boxCol < 9; boxCol += 3) {
                unordered_set<char> seen;
                for (int i = 0; i < 3; i++) {
                    for (int j = 0; j < 3; j++) {
                        char current = board[boxRow + i][boxCol + j];
                        if (current != '.' && seen.find(current) != seen.end()) {
                            return false;
                        }
                        seen.insert(current);
                    }
                }
            }
        }

        return true;
    }
};
