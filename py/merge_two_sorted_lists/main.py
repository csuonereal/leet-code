from solution import ListNode, Solution

if __name__ == '__main__':
    l1 = ListNode(1)
    l1.next = ListNode(3)

    l2 = ListNode(2)
    l2.next = ListNode(4)

    s = Solution()

    merged_list = s.mergeTwoLists(l1, l2)

    node = merged_list
    while node is not None:
        print(node.val, end=" -> ")
        node = node.next
