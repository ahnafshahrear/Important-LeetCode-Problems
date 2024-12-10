class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> current(26, 0);
        vector<int> goal(26, 0);

        for (char ch : s1) {
            goal[ch - 'a']++;
        }
        for (int i = 0; s2[i]; i++) {
            current[s2[i] - 'a']++;
            if (i >= s1.size()) {
                current[s2[i - s1.size()] - 'a']--;
            }
            if (current == goal) {
                return true;
            }
        }
        return false;
    }
};

// Problem Link: https://leetcode.com/problems/permutation-in-string/description/
// Time Complexity: O(n)
