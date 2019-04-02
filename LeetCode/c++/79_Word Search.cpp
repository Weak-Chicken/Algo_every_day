class Solution 
{
private:    
    void check_word(vector<vector<char>>& board, string word, int i, int j, bool& res, vector<vector<bool>>& used)
    {
        if (word.size() == 0)
        {
            res = true;
        }
        else
        {
            used[i][j] = true;
            if (i > 0 && board[i - 1][j] == word[0] && !used[i - 1][j]) 
                check_word(board, word.substr(1), i - 1, j, res, used);
            if (res) return;
            if (i < board.size() - 1 && board[i + 1][j] == word[0] && !used[i + 1][j]) 
                check_word(board, word.substr(1), i + 1, j, res, used);
            if (res) return;
            if (j > 0 && board[i][j - 1] == word[0] && !used[i][j - 1]) 
                check_word(board, word.substr(1), i, j - 1, res, used);
            if (res) return;
            if (j < board[i].size() - 1 && board[i][j + 1] == word[0] && !used[i][j + 1]) 
                check_word(board, word.substr(1), i, j + 1, res, used);
            used[i][j] = false;
        }
    }
public:
    bool exist(vector<vector<char>>& board, string word) 
    {
        if (board.size() == 0 || board[0].size() == 0) return false;
        bool res = false;
        vector<vector<bool>> used(board.size(), vector<bool>(board[0].size(), false));
        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[i].size(); j++)
            {
                if (board[i][j] == word[0]) check_word(board, word.substr(1), i, j, res, used);
                if (res) return true;
            }
        }
        return false;
    }
};