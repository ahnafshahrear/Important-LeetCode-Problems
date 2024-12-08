class Solution {
private:
    bool isValid(TreeNode* root, long long int small, long long int big) {
        if (root == nullptr) return true;
        if (root->val >= big or root->val <= small) return false;
        return isValid(root->left, small, root->val) and isValid(root->right, root->val, big);
    }
public:
    bool isValidBST(TreeNode* root) {
        return isValid(root, INT64_MIN, INT64_MAX);    
    }
};

// Problem Link: https://leetcode.com/problems/validate-binary-search-tree/description/
// Time Complexity: O(n)
