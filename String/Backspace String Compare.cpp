class Solution {
private:
    string backspace(string str) {
        string result = "";

        for (char& ch : str) {
            if (ch != '#') {
                result.push_back(ch);
            } else if (!result.empty()) {
                result.pop_back();
            }
        }
        return result;
    }
public:
    bool backspaceCompare(string& s, string& t) {
        return backspace(s) == backspace(t);
    }
};

// Problem Link: https://leetcode.com/problems/backspace-string-compare/description/
// Time Complexity: O(n)
