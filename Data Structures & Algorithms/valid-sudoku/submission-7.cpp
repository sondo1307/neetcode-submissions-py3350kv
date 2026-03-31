class Solution
{
public:
    bool isValidSudoku(vector<vector<char> > &board)
    {
        unordered_set<string> hashSet;
        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                char val = board[r][c];
                ostringstream rs;
                rs << val << "row" << r;

                ostringstream cs;
                cs << val << "col" << c;

                ostringstream sqrs;
                sqrs << val << "square" << r / 3 << c / 3;

                if (val != '.')
                {
                    if (!hashSet.insert(rs.str()).second || !hashSet.insert(cs.str()).second
                        || !hashSet.insert(sqrs.str()).second)
                    {
                        return false;
                    }
                }
            }
        }

        return true;
    }
};