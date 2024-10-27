class Solution {
public:
    bool isHappy(int n) {
        set<int> numbers;
        while (true) {
            int number = 0;
            while (n) {
                number += (n % 10) * (n % 10);
                n /= 10;
            }
            if (number == 1) {
                return true;
            }
            if (numbers.count(number)) {
                break;
            }
            numbers.insert(number);
            n = number;
        }
        return false;
    }
};
