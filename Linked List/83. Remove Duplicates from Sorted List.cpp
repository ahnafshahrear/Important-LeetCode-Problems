class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* ptr = head;

        while (ptr != nullptr and ptr->next != nullptr) {
            (ptr->val == ptr->next->val) ? ptr->next = ptr->next->next : ptr = ptr->next;
        }        
        return head;
    }
};

// Problem Link: https://leetcode.com/problems/remove-duplicates-from-sorted-list/description/
// Time Complexity: O(n)
