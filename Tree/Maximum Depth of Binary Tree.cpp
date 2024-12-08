class Solution {
public:
    int maxDepth(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        return 1 + max(maxDepth(root->left), maxDepth(root->right));
    }
};

// Problem Link: https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
// Time Complexity: O(n)
