class Solution {
private:
    int sum(TreeNode* node, int low, int high) {
        if (node == nullptr) return 0;
        if (node->val > high) return sum(node->left, low, high);
        else if (node->val < low) return sum(node->right, low, high);
        return node->val + sum(node->left, low, high) + sum(node->right, low, high);
    }

public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        return sum(root, low, high);
    }
};
