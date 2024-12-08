class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string result = "";
        int length = 0;

        while (length < strs[0].size()) {
            // We'll check if the current character at index length exists in every string
            for (string& str : strs) {
                if (length >= str.size() or str[length] != strs[0][length]) {
                    return result;
                }
            }
            result.push_back(strs[0][length]);
            length++;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/longest-common-prefix/description/
// Time Complexity: O(m*n)
