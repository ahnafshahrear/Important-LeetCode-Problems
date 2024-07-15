class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 1, idx = 1, size = nums.size();

        while (idx < size) {
            (nums[idx] != nums[idx - 1]) ? nums[count++] = nums[idx++] : idx++;
        }
        return count;
    }
};
