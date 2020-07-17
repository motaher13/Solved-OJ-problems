package LeetCode.LinkedList;

public class ReverseLinkedList {

    public ListNode reverseList(ListNode head) {
        if(head==null) return null;
        ListNode a=null,b=head,c=head.next;
        while (c!=null){
            b.next=a;
            a=b;
            b=c;
            c=c.next;
        }
        b.next=a;
        return b;
    }

    public ListNode reverseListRecursive(ListNode head) {
        return recurssion(null,head);
    }

    public ListNode recurssion(ListNode first,ListNode second){
        if(second==null) return first;
        ListNode third=second.next;
        second.next=first;
        return recurssion(second,third);
    }






    public static void main(String[] args){
        ListNode a=new ListNode(1);
        ListNode b=new ListNode(2);
        ListNode c=new ListNode(3);
        ListNode d=new ListNode(4);
        a.next=b;
        b.next=c;
        c.next=d;
        ListNode out=(new ReverseLinkedList()).reverseListRecursive(a);
        ListNode k=out;
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}
