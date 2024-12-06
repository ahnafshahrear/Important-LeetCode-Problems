class Solution {
private:
    bool symmetricTree(TreeNode* left, TreeNode* right) {
        if (left == nullptr and right == nullptr) return true;
        if (left == nullptr or right == nullptr or left->val != right->val) return false;
        return symmetricTree(left->left, right->right) and symmetricTree(left->right, right->left);
    }
    
public:
    bool isSymmetric(TreeNode* root) {
        return symmetricTree(root->left, root->right);
    }
};

// Problem Link: https://leetcode.com/problems/symmetric-tree/description/
// Time Complexity: O(n)
