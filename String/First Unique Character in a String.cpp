class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> frequency(26, 0);

        for (char& ch: s) {
            frequency[ch - 'a']++;
        }
        for (int i = 0; s[i]; i++) {
            if (frequency[s[i] - 'a'] == 1) {
                return i;
            }
        }
        return -1;
    }
};

// Problem Link: https://leetcode.com/problems/first-unique-character-in-a-string/description/
// Time Complexity: O(n)
