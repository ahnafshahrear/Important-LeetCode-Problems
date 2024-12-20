class Solution {
public:
    vector<int> searchRange(vector<int>& numbers, int target) {
        int low = 0;
        int high = numbers.size() - 1;
        vector<int> ans = {-1, -1};

        if (!numbers.size()) {
            return ans;
        }
        while (high - low > 1) {
            int mid = (high + low) / 2;

            if (numbers[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        if (numbers[low] == target) {
            ans[0] = low;
        } else if (numbers[high] == target) {
            ans[0] = high;
        } else {
            return {-1, -1};
        }
        low = ans[0], high = numbers.size() - 1;

        while (high - low > 1) {
            int mid = (high + low) / 2;

            if (numbers[mid] <= target) {
                low = mid;
            } else {
                high = mid - 1;
            }
        }
        if (numbers[high] == target) {
            ans[1] = high;
        } else if (numbers[low] == target) {
            ans[1] = low;
        }
        return ans;
    }
};

// Problem Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/
// Time Complexity: O(logn)
