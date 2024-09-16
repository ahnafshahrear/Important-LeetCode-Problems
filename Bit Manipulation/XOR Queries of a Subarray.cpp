class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> prefixXOR(arr.size() + 1, 0), result;

        for (int i = 0; i < arr.size(); i++) {
            prefixXOR[i + 1] = prefixXOR[i] ^ arr[i];
        }
        for (auto q : queries) {
            result.push_back(prefixXOR[q[1] + 1] ^ prefixXOR[q[0]]);
        }
        return result;
    }
};
