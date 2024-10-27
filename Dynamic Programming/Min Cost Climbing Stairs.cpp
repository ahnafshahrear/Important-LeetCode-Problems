class Solution {
public:
    int dp[(int)1e4+10];

    int costCount(vector<int> &cost, int in) {
        if (dp[in] != -1) return dp[in];
        if (in <= 1) return cost[in];
        int costHere = costCount(cost, in - 1) + cost[in];
        if (in > 1) costHere = min(costCount(cost, in - 2) + cost[in], costHere);
        return dp[in] = costHere;
    }

    int minCostClimbingStairs(vector<int> &cost) {
        cost.push_back(0);
        memset(dp, -1, 1e4+10);
        return costCount(cost, cost.size() - 1);
    }
};
