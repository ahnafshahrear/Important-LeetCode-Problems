class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if (!p and !q) return true;
        if (!p or !q or p->val != q->val) return false;
        return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);
    }
};

// Problem Link: https://leetcode.com/problems/same-tree/description/
// Time Complexity: O(n)
