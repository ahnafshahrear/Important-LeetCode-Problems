class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        long long number1 = x;
        long long number2 = 0;

        while (x) {
            number2 = number2 * 10 + x % 10;
            x /= 10;
        }
        return number1 == number2;
    }
};
