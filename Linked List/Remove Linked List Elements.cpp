class Solution {
public:
    ListNode* removeElements(ListNode* head, int target) {
        ListNode* newList = new ListNode();
        ListNode* node = newList;

        while (head) {
            if (head->val != target) {
                node->next = head;
                node = node->next;
            }
            head = head->next;
        }
        node->next = nullptr;

        return newList->next;
    }
};
