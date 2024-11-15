class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int right = arr.size() - 1;

        // First, we'll take the sorted portion ending at the last index
        while (right > 0 and arr[right] >= arr[right - 1]) {
            right--;
        }
        int result = right;
        int left = 0;

        while (left < right and (!left or arr[left - 1] <= arr[left])) {
            // Now we want to take arr[left]. So the right pointer should be adjusted
            while (right < arr.size() and arr[left] > arr[right]) {
                right++;
            }
            result = min(result, right - left - 1);
            left++;
        }
        return result;
    }
};

// Problem Link: https://leetcode.com/problems/shortest-subarray-to-be-removed-to-make-array-sorted/description/
// Time Complexity: O(n)
