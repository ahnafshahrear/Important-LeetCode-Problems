class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root) {
            if (root->val == val) {
                return root;
            }
            else if (root->val < val) {
                root = root->right;
            }
            else root = root->left;
        }    
        return nullptr;
    }
};

// Problem Link: https://leetcode.com/problems/search-in-a-binary-search-tree/description/
// Time Complexity: O(logn)
