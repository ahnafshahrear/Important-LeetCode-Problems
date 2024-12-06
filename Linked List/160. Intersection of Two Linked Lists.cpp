class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 = headA;
        ListNode* ptr2 = headB;

        while (ptr1 != ptr2) {
            if (ptr1 == nullptr) {
                ptr1 = headB;
            } else {
                ptr1 = ptr1->next;
            }
            if (ptr2 == nullptr) {
                ptr2 = headA;
            } else {
                ptr2 = ptr2->next;
            }
        }
        return ptr1;
    }
};

// Problem Link: https://leetcode.com/problems/intersection-of-two-linked-lists/description/
// Time Complexity: O(m + n)
