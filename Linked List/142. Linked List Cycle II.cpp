class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *fast = head;
        ListNode *slow = head;

        while (fast and fast->next) {
            fast = fast->next->next;
            slow = slow->next;
            if (fast == slow) {
                while (head != slow) {
                    head = head->next;
                    slow = slow->next;
                }
                return head;
            }
        }
        return nullptr;
    }
};

// Problem Link: https://leetcode.com/problems/linked-list-cycle-ii/description/
// Time Complexity: O(n)
