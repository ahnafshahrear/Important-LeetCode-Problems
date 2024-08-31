class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root or root->val == p->val or root->val == q->val) {
            return root;
        }
        TreeNode *left = lowestCommonAncestor(root->left, p, q), *right = lowestCommonAncestor(root->right, p, q);

        if (right == nullptr) {
            return left;
        } else if (left == nullptr) {
            return right;
        } 
        return root;
    }
};
