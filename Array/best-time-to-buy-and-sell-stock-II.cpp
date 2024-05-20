class Solution {
public:
    int maxProfit(vector<int> &prices) 
    {
        int buy = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            if (prices[i] < prices[i - 1])
            {
                profit += (prices[i - 1] - buy);
                buy = prices[i];
            }
        }    
        profit += (prices.back() - buy);

        return profit;
    }
};

//... Time Complexity = O[n]
