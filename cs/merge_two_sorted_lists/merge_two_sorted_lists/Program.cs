using merge_two_sorted_lists;

class Program
{
    static void Main(string[] args)
    {
        var l1 = new ListNode(1);
        l1.next = new ListNode(2);
        l1.next.next = new ListNode(4);

        var l2 = new ListNode(1);
        l2.next = new ListNode(3);
        l2.next.next = new ListNode(4);


        Solution s = new Solution();
        var result = s.MergeTwoLists(l1, l2);


        while (result != null)
        {
            System.Console.Write(result.val + " ");
            result = result.next;
        }
    }
}