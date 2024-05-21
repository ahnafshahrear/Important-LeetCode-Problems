class Solution {
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        map<int, unordered_set<char>> rows, cols;
        map<pair<int, int>, unordered_set<char>> subBoard;
        
        for (int r = 0; r < 9; r++)
        {
            for (int c = 0; c < 9; c++)
            {
                if (board[r][c] == '.') continue;
                int num = board[r][c];
                if (rows[r].count(num) or cols[c].count(num)) return false;
                if (subBoard[{r / 3, c / 3}].count(num)) return false;
                subBoard[{r / 3, c / 3}].insert(num);
                rows[r].insert(num); 
                cols[c].insert(num);
            }
        }
        return true;
    }
};
