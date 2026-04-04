class Solution
{
public:
    bool isValidSudoku(vector<vector<char> > &board)
    {
        for (int row = 0; row < 9; row++)
        {
            unordered_set<char> r;
            for (int col = 0; col < 9; col++)
            {
                if (board[row][col] == '.') continue;
                if (r.find(board[row][col]) != r.end()) return false;
                r.insert(board[row][col]);
            }
            // if (r.size() == 0) return false;
        }

        for (int col = 0; col < 9; col++)
        {
            unordered_set<char> c;
            for (int row = 0; row < 9; row++)
            {
                if (board[row][col] == '.') continue;
                if (c.find(board[row][col]) != c.end()) return false;
                c.insert(board[row][col]);
            }
            // if (c.size() == 0) return false;
        }

        unordered_map<string, unordered_set<char> > mp;
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                string key = to_string(i / 3) + to_string(j / 3);
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