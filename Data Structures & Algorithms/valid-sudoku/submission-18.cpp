class Solution
{
public:
    bool isValidSudoku(vector<vector<char> > &board)
    {
        unordered_map<string, unordered_set<char> > mp;
        for (int row = 0; row < 9; row++)
        {
            string key = "r" + to_string(row);
            for (int col = 0; col < 9; col++)
            {
                if (board[row][col] == '.') continue;
                if (mp[key].find(board[row][col]) != mp[key].end()) return false;
                mp[key].insert(board[row][col]);
            }
            // if (mp[key].size() == 0) return false;
        }

        for (int col = 0; col < 9; col++)
        {
            string key = "c" + to_string(col);
            for (int row = 0; row < 9; row++)
            {
                if (board[row][col] == '.') continue;
                if (mp[key].find(board[row][col]) != mp[key].end()) return false;
                mp[key].insert(board[row][col]);
            }
            // if (mp[key].size() == 0) return false;
        }

        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                string key = "b" + to_string(i / 3) + to_string(j / 3);
                if (board[i][j] == '.') continue;
                if (mp[key].find(board[i][j]) != mp[key].end())
                {
                    return false;
                }
                mp[key].insert(board[i][j]);
            }
        }

        return true;
    }
};
