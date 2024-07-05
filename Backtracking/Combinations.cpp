class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        combinations(1, n, k);

        return result;
    }

private:
    vector<vector<int>> result;
    vector<int> current;

    void combinations(int start, int end, int k) {
        if (current.size() == k) {
            result.push_back(current);
            return;
        }
        for (int x = start; x <= end; x++) {
            current.push_back(x);
            combinations(x + 1, end, k);
            current.pop_back();
        }
    }
};
