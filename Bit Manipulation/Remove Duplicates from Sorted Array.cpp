class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1, idx = 1;

        while (idx < nums.size()) {
            (nums[idx] != nums[idx - 1]) ? nums[count++] = nums[idx++] : idx++;
        }
        return count;
    }
};
