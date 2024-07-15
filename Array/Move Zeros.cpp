class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int idx = 0, z = 0;

        while (idx < nums.size()) {
            if (nums[idx]) {
                swap(nums[idx++], nums[z++]);
            } else {
                idx++;
            }
        }
    }
};
