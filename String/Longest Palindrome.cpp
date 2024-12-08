class Solution {
public:
    int longestPalindrome(string& str) {
        unordered_map<char, int> frequency;

        for (char& ch : str) {
            frequency[ch]++;
        }
        int odd = 0;

        for (auto& x : frequency) {
            odd += x.second & 1;
        }
        // We can only take one odd frequency
        if (odd) odd--;

        return str.size() - odd;
    }
};

// Problem Link: https://leetcode.com/problems/longest-palindrome/description/
// Time Complexity: O(n)
