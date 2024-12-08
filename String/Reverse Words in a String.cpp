class Solution {
public:
    string reverseWords(string s) {
        stack<string> words;
        string word = "";

        for (char ch: s) {
            if (ch == ' ') {
                if (word.size()) {
                    words.push(word);
                }
                word = "";
            }
            else word.push_back(ch);
        }
        if (word.size()) {
            words.push(word);
        }
        string result = "";

        while (!words.empty()) {
            result += words.top() + " ";
            words.pop();
        }
        result.pop_back();

        return result;
    }
};

// Problem Link: https://leetcode.com/problems/reverse-words-in-a-string/description/
// Time Complexity: O(n)
