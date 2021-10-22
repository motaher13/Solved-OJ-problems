package AlgoExp.LinkedList;

public class ZipLinkedList {
    // This is an input class. Do not edit.
    public static class LinkedList {
        public int value;
        public LinkedList next;

        public LinkedList(int value) {
            this.value = value;
            this.next = null;
        }
    }

    public LinkedList zipLinkedList(LinkedList linkedList) {
        LinkedList a=linkedList, b=linkedList;
        while(b!=null && b.next!=null){
            a=a.next;
            b=b.next.next;
        }

        LinkedList c= reverse(a.next);
        a.next=null;

        a=linkedList;

        while(a!=null && c!=null){
            LinkedList aNext=a.next;
            LinkedList cNext=c.next;
            a.next=c;
            c.next=aNext;
            a=aNext;
            c=cNext;
        }

        return linkedList;
    }

    public LinkedList reverse(LinkedList head){
        LinkedList cur=head;
        LinkedList prev=null;
        while(cur!=null){
            LinkedList next=cur.next;
            cur.next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
}
