class Solution {
public:
    long long maxPoints(vector<vector<int>>& points) {
        int columns = points[0].size();
        vector<long long> previousRow(columns, 0), currentRow(columns);

        for (auto &nthRow : points) {
            long long currentMax = 0;

            for (int c = 0; c < columns; c++) {
                currentMax = max(previousRow[c], currentMax - 1);
                currentRow[c] = currentMax;
            }
            currentMax = 0;

            for (int c = columns - 1; c >= 0; c--) {
                currentMax = max(previousRow[c], currentMax - 1);
                currentRow[c] = max(currentMax, currentRow[c]) + nthRow[c];
            }
            previousRow = currentRow;
        }
        long long ans = 0;

        for (int c = 0; c < columns; c++) {
            ans = max(previousRow[c], ans);
        }
        return ans;
    }
};
