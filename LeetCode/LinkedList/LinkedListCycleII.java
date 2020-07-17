package LeetCode.LinkedList;

public class LinkedListCycleII {

    public ListNode detectCycle(ListNode head) {
        if(head==null) return null;
        ListNode first=head,second=head;

        do{
            first=first.next;
            if(second.next==null) return null;
            second=second.next;
            if(second.next==null) return null;
            second=second.next;
        }while (first!=second);

        first=head;
        while (first!=second){
            first=first.next;
            second=second.next;
        }

        return second;
    }

    public static void main(String[] args){
        ListNode a=new ListNode(1);
        ListNode b=new ListNode(2);
        ListNode c=new ListNode(3);
        ListNode d=new ListNode(4);
        ListNode e=new ListNode(5);
        a.next=b;
        b.next=c;
        c.next=d;
        d.next=e;
        e.next=c;
        ListNode out=(new LinkedListCycleII()).detectCycle(a);
        System.out.println(out.val);
    }
}
