package LeetCode.LinkedList;

public class IntersectionofTwoLinkedLists {

    public ListNode getIntersectionNode(ListNode headA, ListNode headB) {
        if(headA==null || headB==null) return null;
        ListNode a=headA,b=headB,last=null;
        boolean reachEnd=false;
        while (true){
            if(a==b) return a;
            if(a.next==null){
                if(reachEnd && a!=last) return null;
                reachEnd=true;
                last=a;
                a=headB;
            }else a=a.next;

            if(b.next==null){
                if(reachEnd && b!=last) return null;
                reachEnd=true;
                last=b;
                b=headA;
            }else b=b.next;
        }
    }

    public ListNode best(ListNode headA, ListNode headB) {
        ListNode pa=headA;
        ListNode pb=headB;

        // this will work because after some loop both pa and pb
        // will be null at the same time
        while(pa!=pb){
            pa = pa==null? headB:pa.next;
            pb = pb==null? headA:pb.next;
        }
        return pa;
        
    }

    public static void main(String[] args) {
        ListNode a=new ListNode(1);
        ListNode b=new ListNode(2);
        ListNode c=new ListNode(3);
        ListNode d=new ListNode(4);

        ListNode e=new ListNode(5);

        ListNode f=new ListNode(6);
        ListNode g=new ListNode(7);
        a.next=b;
        b.next=c;
        c.next=d;

        d.next=f;
        e.next=f;

        f.next=g;

        ListNode out=(new IntersectionofTwoLinkedLists()).getIntersectionNode(a,e);
        ListNode k=out;
        if(k!=null)
            System.out.println(k.val);
        else
            System.out.println("null");
    }
}
