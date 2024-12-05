class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        int buyingPrice = prices[0];

        for (int i = 1; i < prices.size(); i++) {
            profit = max(profit, prices[i] - buyingPrice);
            buyingPrice = min(buyingPrice, prices[i]);
        }
        return profit;
    }
};

// Problem Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
// Time Complexity: O(n) 
