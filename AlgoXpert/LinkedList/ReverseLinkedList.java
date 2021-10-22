package AlgoExp.LinkedList;

public class ReverseLinkedList {
    public static LinkedList reverseLinkedList(LinkedList head) {
        LinkedList a=null;
        LinkedList b=head;

        while(b!=null){
            LinkedList c=b.next;
            b.next=a;
            a=b;
            b=c;
        }

        return a;
    }

    static class LinkedList {
        int value;
        LinkedList next = null;

        public LinkedList(int value) {
            this.value = value;
        }
    }
}
