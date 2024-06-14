class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>> &intervals) 
    {
        int size = intervals.size();
        int last = 0, count = 1;

        sort(intervals.begin(), intervals.end(),
        [](vector<int> &x, vector<int> &y){
            return x[1] < y[1];
        });

        for (int i = 1; i < size; i++)
        {
            if (intervals[i][0] >= intervals[last][1])
            {
                last = i; count++;
            }
        }
        return size - count;
    }
};
