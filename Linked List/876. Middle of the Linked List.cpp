class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast != nullptr and fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};

// Problem Link: https://leetcode.com/problems/middle-of-the-linked-list/description/
// Time Complexity: O(n)
