class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        pascal.push_back({1});

        for (int i = 1; i < numRows; i++) {
            pascal.push_back({1});
            for (int k = 1; k < pascal[i - 1].size(); k++) {
                pascal[i].push_back(pascal[i - 1][k - 1] + pascal[i - 1][k]);
            }
            pascal[i].push_back(1);
        }
        return pascal;
    }
};
