class Solution {
public:
    int reverse(int num) {
        int result = 0;

        while (num) {
            if (result > INT_MAX / 10 or result < INT_MIN / 10) {
                return 0;
            }
            result = result * 10 + num % 10;
            num /= 10;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/reverse-integer/description/
// Time Complexity: O(32)
