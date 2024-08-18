class Solution {
public:
    int nthUglyNumber(int n) {
        vector<int> primeFactors = {2, 3, 5};
        long long number;

        priority_queue<long long, vector<long long>, greater<long long>> pq;
        pq.push(1);

        while (n) {
            number = pq.top();
            pq.pop();
            while (pq.size() and pq.top() == number) {
                pq.pop();
            }
            for (int factor : primeFactors) {
                pq.push(number * factor);
            }
            n--;
        }
        return number;
    }
};
