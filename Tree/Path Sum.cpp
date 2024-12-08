class Solution {
public:
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) {
            return false;
        }
        else if (root->left == nullptr and root->right == nullptr) {
            return root->val == targetSum;
        }
        return hasPathSum(root->left, targetSum - root->val) or hasPathSum(root->right, targetSum - root->val);
    }
};

// Problem Link: hhttps://leetcode.com/problems/path-sum/description/
// Time Complexity: O(n)
