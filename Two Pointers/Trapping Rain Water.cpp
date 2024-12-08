class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, result = 0;
        int maxLeftHeight = height[left], maxRightHeight = height[right];

        while (left < right) {
            if (maxLeftHeight < maxRightHeight) {
                maxLeftHeight = max(maxLeftHeight, height[++left]);
                result += maxLeftHeight - height[left];
            } else {
                maxRightHeight = max(maxRightHeight, height[--right]);
                result += maxRightHeight - height[right];
            }
        } 
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/trapping-rain-water/description/
// Time Complexity: O(n)
