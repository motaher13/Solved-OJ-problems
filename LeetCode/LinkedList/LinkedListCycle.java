package LeetCode.LinkedList;

public class LinkedListCycle {
    public boolean hasCycle(ListNode head) {
        if(head==null) return false;
        ListNode first=head,second=head;

        while (true){
            first=first.next;
            if(second.next==null) return false;
            second=second.next;
            if(second.next==null) return false;
            second=second.next;
            if(first==second)
                return true;
        }
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
        e.next=b;
        boolean out=(new LinkedListCycle()).hasCycle(a);
        System.out.println(out);

//        ListNode k=a;
//        while (k!=null){
//            System.out.println(k.val);
//            k=k.next;
//        }


    }
}
