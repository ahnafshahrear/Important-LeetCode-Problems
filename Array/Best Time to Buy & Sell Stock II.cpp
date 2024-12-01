class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buyingPrice = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            if (prices[i] < prices[i - 1]) {
                profit += (prices[i - 1] - buyingPrice);
                buyingPrice = prices[i];
            }
        }
        profit += (prices.back() - buyingPrice);

        return profit;
    }
};

// Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/description/
// Time Complexity: O(n)
