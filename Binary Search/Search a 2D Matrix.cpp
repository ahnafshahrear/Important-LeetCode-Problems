class Solution {
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target) 
    {
        if (matrix.empty() or matrix[0].empty()) {
            return false;
        }
        int rows = matrix.size(), columns = matrix[0].size(), low = 0, high = rows * columns - 1;

        while (high - low > 1) {
            int mid = high - (high - low) / 2;

            (matrix[mid / columns][mid % columns] < target) ? low = mid + 1 : high = mid;
        }
        return matrix[low / columns][low % columns] == target or matrix[high / columns][high % columns] == target;
    }
};
