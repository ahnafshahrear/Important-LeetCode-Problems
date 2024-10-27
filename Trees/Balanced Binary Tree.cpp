class Solution {
public:
    bool isBalanced(TreeNode* root) {
        checkBalanced(root);
        return balanced;
    }

private:
    bool balanced = true;

    int checkBalanced(TreeNode* root) {
        if (root == nullptr) {
            return 0;
        }
        int left = checkBalanced(root->left), right = checkBalanced(root->right);

        if (abs(left - right) > 1) balanced = false;

        return 1 + max(left, right);
    }
};
