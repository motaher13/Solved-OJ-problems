package AlgoExp.LinkedList;

public class LinkedListPalindrome {
    // This is an input class. Do not edit.
    public static class LinkedList {
        public int value;
        public LinkedList next;

        public LinkedList(int value) {
            this.value = value;
            this.next = null;
        }
    }

    public boolean linkedListPalindrome(LinkedList head) {
        LinkedList a=head, b=head;
        while(b!=null && b.next!=null){
            a=a.next;
            b=b.next.next;
        }

        LinkedList c=reverseList(a);
        a=head;

        while(c!=null){
            if(a.value!=c.value) return false;
            a=a.next;
            c=c.next;
        }

        return true;
    }

    public LinkedList reverseList(LinkedList head){
        LinkedList prev=null;
        LinkedList cur=head;
        while(cur!=null){
            LinkedList next=cur.next;
            cur.next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
}
