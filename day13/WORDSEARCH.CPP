class Solution {
public:
    bool existAt(vector<vector<char>>& board, int i, int j, int index, string& word) {
        if (index == word.size()) {
            return true;
        }
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != word[index]) {
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#'; // Mark the cell as visited

        bool found = existAt(board, i + 1, j, index + 1, word) ||
                     existAt(board, i - 1, j, index + 1, word) ||
                     existAt(board, i, j + 1, index + 1, word) ||
                     existAt(board, i, j - 1, index + 1, word);

        board[i][j] = temp; // Restore the cell

        return found;
    }

    bool exist(vector<vector<char>>& board, string word) {
        for (int i = 0; i < board.size(); ++i) {
            for (int j = 0; j < board[0].size(); ++j) {
                if (existAt(board, i, j, 0, word)) {
                    return true;
                }
            }
        }
        return false;
    }
};