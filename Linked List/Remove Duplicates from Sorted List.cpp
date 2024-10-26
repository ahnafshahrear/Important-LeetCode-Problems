class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* node = head;

        while (node != nullptr and node->next != nullptr) {
            if (node->val == node->next->val) node->next = node->next->next;
            else node = node->next;
        }
        return head;
    }
};
