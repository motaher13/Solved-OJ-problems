package LeetCode.LinkedList;

public class OddEvenLinkedList {

    public ListNode oddEvenList(ListNode head) {
        if(head==null) return null;
        if(head.next==null) return head;
        ListNode a=head;
        ListNode b=head.next;
        ListNode second=head.next;

        while (true){
            if(a.next.next==null) break;
            a.next=a.next.next;
            a=a.next;
            if(b.next.next==null) break;
            b.next=b.next.next;
            b=b.next;
        }
        a.next=second;
        b.next=null;
        return head;

    }

    public static void main(String[] args) {
        ListNode a=new ListNode(1);
        ListNode b=new ListNode(2);
        ListNode c=new ListNode(3);
        ListNode d=new ListNode(4);
        ListNode e=new ListNode(5);
        ListNode f=new ListNode(6);
        a.next=b;
        b.next=c;
//        c.next=d;
//        d.next=e;
//        e.next=f;
        ListNode out=(new OddEvenLinkedList()).oddEvenList(a);
        ListNode k=out;
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}
