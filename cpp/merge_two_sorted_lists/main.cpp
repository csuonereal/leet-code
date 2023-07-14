#include <iostream>
#include "Solution.h"

int main() {
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(3);

    // Create second sorted linked list: 2 -> 4
    ListNode *list2 = new ListNode(2);
    list2->next = new ListNode(4);

    // Merge two sorted linked lists
    Solution s;
    ListNode *merged_list = s.mergeTwoLists(list1, list2);

    // Print the merged list
    while (merged_list != NULL) {
        std::cout << merged_list->val << " ";
        merged_list = merged_list->next;
    }

}
