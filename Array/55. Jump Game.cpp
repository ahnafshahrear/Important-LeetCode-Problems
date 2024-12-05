class Solution {
public:
    bool canJump(vector<int> &nums)
    {
        int jump = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (i == nums.size() - 1) return true;
            jump = max(jump - 1, nums[i]);
            if (jump <= 0) break;
        }
        return false;
    }
};

// Problem Link: https://leetcode.com/problems/jump-game/description/
// Time Complexity: O(n)
