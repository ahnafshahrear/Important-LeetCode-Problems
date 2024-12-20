class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        
        while (high - low > 1) {
            int mid = (low + high) / 2;

            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }   
        }
        if (nums[low] >= target) {
            return low;
        } else if (nums[high] >= target) {
            return high;
        }
        return high + 1;
    }
};

// Problem Link: https://leetcode.com/problems/search-insert-position/description/
// Time Complexity: O(logn)
