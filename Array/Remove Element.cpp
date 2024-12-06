class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = nums.size();
        int i = 0;

        for (int j = 0; j < nums.size(); j++) {
            nums[j] != val ? nums[i++] = nums[j] : count--;
        }
        return count;
    }
};

// Problem Link: https://leetcode.com/problems/remove-element/description/
// Time Complexity: O(n)
