package LeetCode.LinkedList;

public class AddTwoNumbers {

    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        if(l1==null || l2==null) return null;
        ListNode current=new ListNode();
        ListNode h=current;
        int overflow=0;
        while (l1!=null || l2!=null || overflow!=0){
            int k=0;
            if(l1!=null) {
                k+=l1.val;
                l1=l1.next;
            }
            if(l2!=null){
                k+=l2.val;
                l2=l2.next;
            }
            k+=overflow;
            if(k>9){
                overflow=1;
                k=k%10;
            }else overflow=0;
            ListNode f=new ListNode(k);
            current.next=f;
            current=f;
        }

        return h.next;

    }

    public static void main(String[] args) {
        ListNode a=new ListNode(2);
        ListNode b=new ListNode(4);
        ListNode c=new ListNode(3);

        ListNode d=new ListNode(5);
        ListNode e=new ListNode(6);
        ListNode f=new ListNode(6);
        a.next=b;
        b.next=c;
        d.next=e;
        e.next=f;
        ListNode out=(new AddTwoNumbers()).addTwoNumbers(a,d);
        ListNode k=out;
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}
