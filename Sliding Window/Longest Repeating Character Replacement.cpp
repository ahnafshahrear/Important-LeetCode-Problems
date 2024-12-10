class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> count(26, 0);
        int i = 0, j = 0;
        int maxFrequency = 0; // Max frequency character inside the window
        int result = 0;
        
        while (i < s.size()) {
            count[s[i] - 'A']++;
            maxFrequency = max(maxFrequency, count[s[i] - 'A']);
            while (i - j + 1 - maxFrequency > k) {
                count[s[j] - 'A']--;
                j++;
            }
            result = max(result, i - j + 1);
            i++;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/longest-repeating-character-replacement/description/
// Time Complexity: O(n) 
