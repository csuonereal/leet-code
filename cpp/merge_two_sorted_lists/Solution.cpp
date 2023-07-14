//
// Created by Ulaş Tüzün on 14.07.2023.
//

#include "Solution.h"

ListNode *Solution::mergeTwoLists(ListNode *list1, ListNode *list2) {
    ListNode *head = nullptr;
    ListNode *tail = nullptr;
    
    while (list1 != nullptr && list2 != nullptr) {
        if (list1->val < list2->val) {
            if (head == nullptr) {
                head = list1;
                tail = list1;
            } else {
                tail->next = list1;
                tail = tail->next;
            }
            list1 = list1->next;
        } else {
            if (head == nullptr) {
                head = list2;
                tail = list2;
            } else {
                tail->next = list2;
                tail = tail->next;
            }
            list2 = list2->next;
        }
    }

    if (list1 != nullptr) {
        if (head == nullptr) {
            head = list1;
        } else {
            tail->next = list1;
        }
    } else if (list2 != nullptr) {
        if (head == nullptr) {
            head = list2;
        } else {
            tail->next = list2;
        }
    }
    return head;
}