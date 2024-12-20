class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (p->val > root->val and q->val > root->val) {
            return lowestCommonAncestor(root->right, p, q);
        } else if (p->val < root->val and q->val < root->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else {
            return root;
        }
    }
};

// Problem Link: https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-search-tree/description/
// Time Complexity: O(n)
