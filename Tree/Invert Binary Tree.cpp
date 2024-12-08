class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (root == nullptr) {
            return root;
        }
        invertTree(root->left);
        invertTree(root->right);

        TreeNode* temp = root->left;
        root->left = root->right;
        root->right = temp;

        return root;
    }
};

// Problem Link: https://leetcode.com/problems/invert-binary-tree/description/
// Time Complexity: O(n)
