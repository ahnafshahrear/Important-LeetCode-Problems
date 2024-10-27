class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> result(nums.size());
        int idx = nums.size() - 1, start = 0, end = nums.size() - 1;

        while (start <= end) {
            if (abs(nums[start]) > abs(nums[end])) result[idx--] = nums[start] * nums[start++];
            else result[idx--] = nums[end] * nums[end--];
        }
        return result;
    }
};
