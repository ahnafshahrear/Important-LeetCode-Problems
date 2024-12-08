class Solution {
public:
    bool rotateString(string str, string goal) {
        return str.size() == goal.size() and (str + str).find(goal) != string::npos;
    }
};

// Problem Link: https://leetcode.com/problems/rotate-string/description/
// Time Complexity: O(n)
