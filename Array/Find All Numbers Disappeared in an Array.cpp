class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        for (int num : nums) {
            int index = abs(num) - 1;
            nums[index] = -abs(nums[index]);
        }
        vector<int> result;

        for (int idx = 0; idx < nums.size(); idx++) {
            if (nums[idx] > 0) {
                result.push_back(idx + 1);
            }
        }
        return result;
    }
};
