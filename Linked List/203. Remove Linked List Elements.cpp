class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* start = new ListNode(-1, head);
        ListNode* ptr = start;

        while (ptr->next != nullptr) {
            if (ptr->next->val == val) {
                ptr->next = ptr->next->next;
            } else {
                ptr = ptr->next;
            }
        }        
        return start->next;
    }
};

// Problem Link: https://leetcode.com/problems/remove-linked-list-elements/description/
// Time Complexity: O(n)
