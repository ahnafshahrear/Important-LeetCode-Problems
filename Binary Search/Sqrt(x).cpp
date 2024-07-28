class Solution {
public:
    int mySqrt(int number) {
        double eps = 1e-7;
        double low = 0, high = number;

        while (high - low > eps) {
            double mid = (low + high) / 2;
            if (mid * mid < number) {
                low = mid;
            } else {
                high = mid;
            }
        }
        return high;
    }
};
