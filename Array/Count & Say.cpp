class Solution {
public:
    string countAndSay(int n) {
        return n == 1 ? "1" : runLengthEncoding(n - 1, "1");
    }
    string runLengthEncoding(int n, string str) {
        if (!n) {
            return str;
        }
        string result = "";
        char current = str.front();
        int count = 0;

        for (char& ch : str) {
            if (ch == current) {
                count++;
            } else {
                result.push_back(count + '0');
                result.push_back(current);
                current = ch;
                count = 1;
            }
        }
        result.push_back(count + '0');
        result.push_back(current);

        return runLengthEncoding(n - 1, result);
    }
};

// Problem Link: https://leetcode.com/problems/count-and-say/description/
// Time Complexity: O(2^n)
