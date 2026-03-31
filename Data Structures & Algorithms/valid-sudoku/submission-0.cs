public class Solution {
    public bool IsValidSudoku(char[][] board) {
        var seen = new HashSet<string>();

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                char val = board[r][c];
                
                if (val != '.') {
                    // HashSet.Add() returns false if the string is already in the set!
                    if (!seen.Add($"{val} in row {r}") || 
                        !seen.Add($"{val} in col {c}") || 
                        !seen.Add($"{val} in box {r / 3}-{c / 3}")) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
}