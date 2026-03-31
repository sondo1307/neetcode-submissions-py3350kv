public class Solution {
    public boolean isValidSudoku(char[][] board) {
        // Dùng mảng nguyên thủy thay vì HashSet
        boolean[][] rows = new boolean[9][9];
        boolean[][] cols = new boolean[9][9];
        boolean[][] squares = new boolean[9][9];

        for (int r = 0; r < 9; r++) {
            for (int c = 0; c < 9; c++) {
                if (board[r][c] == '.') continue;

                // Chuyển ký tự '1'-'9' thành chỉ số 0-8
                int val = board[r][c] - '1';
                
                // Công thức tính index của 9 ô vuông 3x3
                int squareIndex = (r / 3) * 3 + (c / 3);

                // Nếu số này đã từng xuất hiện -> trùng lặp -> false
                if (rows[r][val] || cols[c][val] || squares[squareIndex][val]) {
                    return false;
                }

                // Đánh dấu là đã xuất hiện
                rows[r][val] = true;
                cols[c][val] = true;
                squares[squareIndex][val] = true;
            }
        }
        return true;
    }
}