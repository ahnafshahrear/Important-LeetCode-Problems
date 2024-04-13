class Solution {
public:
    int maximalRectangle(vector<vector<char>> &matrix) 
    {
        int maxArea = 0, rows = matrix.size(), cols = matrix[0].size();
        vector<int> nthRow(cols);

        for (int r = 0; r < rows; r++)
        {
            for (int k = 0; k < cols; k++)
            {
                if (r) 
                {
                    if (matrix[r][k] == '1') nthRow[k]++;
                    else nthRow[k] = 0;
                }
                else nthRow[k] = matrix[r][k] - '0';
            }
            maxArea = max(largestRectangleArea(nthRow), maxArea);
        }
        return maxArea;
    }
private:
    int largestRectangleArea(vector<int> &heights) 
    {
        stack<pair<int, int>> monotonicHeights;
        int size = heights.size();
        int maxArea = 0;

        for (int i = 0; i < size; i++)
        {
            int start = i;
            while (!monotonicHeights.empty() and monotonicHeights.top().second > heights[i])
            {
                int index = monotonicHeights.top().first, height = monotonicHeights.top().second;
                maxArea = max(height * (i - index), maxArea);
                monotonicHeights.pop();
                start = index;
            }
            monotonicHeights.push({start, heights[i]});
        }

        while (!monotonicHeights.empty())
        {
            int index = monotonicHeights.top().first, height = monotonicHeights.top().second;
            maxArea = max(height * (size - index), maxArea);
            monotonicHeights.pop();
        }
        return maxArea;
    }
};
