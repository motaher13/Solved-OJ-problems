package LeetCode.LinkedList;

public class RemoveNthNodeFromEndofList {
    public ListNode removeNthFromEnd(ListNode head, int n) {
        ListNode k=head;
        int i=0;
        while (k!=null){
            k=k.next;
            i++;
        }
        int j=i-n;
        if(j==0) return head.next;

        for(i=1,k=head;;i++){
            if(i==j){
                k.next=k.next.next;
                return head;
            }else{
                k=k.next;
            }
        }
    }

    public ListNode best(ListNode head, int n) {
        ListNode dummy = new ListNode(0);
        dummy.next = head;
        ListNode first = dummy;
        ListNode second = dummy;
        // Advances first pointer so that the gap between first and second is n nodes apart
        for (int i = 1; i <= n + 1; i++) {
            first = first.next;
        }
        // Move first to the end, maintaining the gap
        while (first != null) {
            first = first.next;
            second = second.next;
        }
        second.next = second.next.next;
        return dummy.next;
    }

    public static void main(String[] args){
        ListNode a=new ListNode(4);
        ListNode b=new ListNode(5);
        ListNode c=new ListNode(1);
        ListNode d=new ListNode(9);
        a.next=b;
        b.next=c;
        c.next=d;
        ListNode out=(new RemoveNthNodeFromEndofList()).removeNthFromEnd(a,1);
        ListNode k=out;
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}



  class ListNode {
      int val;
      ListNode next;
      ListNode() {}
      ListNode(int val) { this.val = val; }
      ListNode(int val, ListNode next) { this.val = val; this.next = next; }
  }
