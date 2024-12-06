class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* previous = nullptr;

        while (head != nullptr) {
            ListNode* next = head->next;
            head->next = previous;
            previous = head;
            head = next;
        }
        return previous;
    }
};

// Problem Link: https://leetcode.com/problems/reverse-linked-list/description/
// Time Complexity: O(n)
