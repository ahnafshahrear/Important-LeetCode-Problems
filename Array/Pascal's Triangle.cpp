class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        result.push_back({1});

        for (int i = 1; i < numRows; i++) {
            result.push_back({1});
            for (int k = 1; k < result[i - 1].size(); k++) {
                result[i].push_back(result[i - 1][k - 1] + result[i - 1][k]);
            }
            result[i].push_back(1);
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/pascals-triangle/description/
// Time Complexity: O(n^2)
