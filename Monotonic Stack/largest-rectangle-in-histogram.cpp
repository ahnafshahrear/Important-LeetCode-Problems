class Solution {
public:
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
