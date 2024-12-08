class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* mergedList = new ListNode();
        ListNode* ptr = mergedList;

        while (list1 != nullptr and list2 != nullptr) {
            if (list1->val < list2->val) {
                ptr->next = list1;
                list1 = list1->next;
            } else {
                ptr->next = list2;
                list2 = list2->next;
            }
            ptr = ptr->next;
        }   
        if (list1) {
            ptr->next = list1;
        }
        else {
            ptr->next = list2;
        }
        return mergedList->next;
    }
};

// Problem Link: https://leetcode.com/problems/merge-two-sorted-lists/description/
// Time Complexity: O(m + n)
