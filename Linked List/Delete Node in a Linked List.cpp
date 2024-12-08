class Solution {
public:
    void deleteNode(ListNode* node) {
        node->val = node->next->val;
        node->next = node->next->next;
    }
};

// Problem Link: https://leetcode.com/problems/delete-node-in-a-linked-list/description/
// Time Complexity: O(1)
