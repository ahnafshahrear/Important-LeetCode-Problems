class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) { 
        SolveSudoku(board);
    }
    
private:
    bool SolveSudoku(vector<vector<char>>& board) {
        int size = board.size();

        for (int r = 0; r < size; r++) {
            for (int c = 0; c < size; c++) {
                if (board[r][c] == '.') {
                    for (char n = '1'; n <= '9'; n++) {
                        if (solvable(r, c, n, board) == true) {
                            board[r][c] = n;
                            if (SolveSudoku(board) == true) {
                                return true;
                            }
                            board[r][c] = '.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    bool solvable(int r, int c, char n, vector<vector<char>>& board) {
        for (int k = 0; k < 9; k++) {
            if (board[r][k] == n or board[k][c] == n) {
                return false;
            }
        }
        int row = r - r % 3, column = c - c % 3;

        for (int i = row; i < row + 3; i++) {
            for (int j = column; j < column + 3; j++) {
                if (board[i][j] == n) {
                    return false;
                }
            }
        }
        return true;
    }
};
