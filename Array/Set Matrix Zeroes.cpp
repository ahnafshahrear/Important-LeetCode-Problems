class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int rows = matrix.size();
        int columns = matrix[0].size();
        int firstColumn = 1;

        for (int r = 0; r < rows; r++) {
            if (!matrix[r][0]) firstColumn = 0;
            for (int c = 1; c < columns; c++) {
                if (!matrix[r][c]) {
                    matrix[r][0] = matrix[0][c] = 0;
                }
            }
        }
        for (int r = rows - 1; r >= 0; r--) {
            for (int c = columns - 1; c >= 1; c--) {
                if (matrix[r][0] == 0 or matrix[0][c] == 0) {
                    matrix[r][c] = 0;
                }
            }
            if (!firstColumn) matrix[r][0] = 0;
        }
    }
};

// Problem Link: https://leetcode.com/problems/set-matrix-zeroes/description/
// Time Complexity: O(m*n)
