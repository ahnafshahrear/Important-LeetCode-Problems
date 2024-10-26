class Solution {
private:
    TreeNode* createSortedArrayToBST(vector<int>& nums, int start, int end) {
        if (start > end) return nullptr;
        int mid = (start + end) / 2;
        return new TreeNode(nums[mid], createSortedArrayToBST(nums, start, mid - 1), createSortedArrayToBST(nums, mid + 1, end));
    }

public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return createSortedArrayToBST(nums, 0, nums.size() - 1);
    }
};
