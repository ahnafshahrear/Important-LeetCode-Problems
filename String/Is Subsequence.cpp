class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;

        for (int i = 0; i < t.size() and j < s.size(); i++) {
            if (s[j] == t[i]) j++;
        }
        return j >= s.size();
    }
};

// Problem Link: https://leetcode.com/problems/is-subsequence/description/
// Time Complexity: O(n)
