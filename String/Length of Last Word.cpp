class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;

        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == ' ') {
                if (length) {
                    return length;
                } else {
                    length = 0;
                }
            } else {
                length++;
            }
        }
        return length;
    }
};

// Problem Link: https://leetcode.com/problems/length-of-last-word/description/
// Time Complexity: O(n)
