class Solution
{
    public boolean isValidSudoku(char[][] board)
    {
        Set<String> hashSet = new HashSet<>();
        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                char val = board[r][c];
                if (val != '.')
                {
                    if (! hashSet.add(String.format("%c in row %c", val, r)) || ! hashSet.add(String.format("%c in " + "col %c", val, c)) || ! hashSet.add(String.format("%c in square %c-%c", val, r / 3, c / 3)))
                    {
                        return false;
                    }
                }

            }
        }

        return true;
    }
}
