class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;

        while (left < right) {
            if (numbers[left] + numbers[right] < target) {
                left++;
            } else if (numbers[left] + numbers[right] > target) {
                right--;
            } else {
                break;
            }
        }
        return {++left, ++right};
    }
};

// Problem Link: https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
// Time Complexity: O(n)
