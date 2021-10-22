package AlgoExp.LinkedList;

public class RemoveKthNodeFromEnd {
    public static void removeKthNodeFromEnd(LinkedList head, int k) {
        LinkedList first=head;
        for(int i=0;i<k;i++) first=first.next;
        LinkedList second=head;
        if(first==null){
            second.value=second.next.value;
            second.next=second.next.next;
            return;
        }
        while(first.next!=null){
            first=first.next;
            second=second.next;
        }
        second.next=second.next.next;
    }

    static class LinkedList {
        int value;
        LinkedList next = null;

        public LinkedList(int value) {
            this.value = value;
        }
    }
}
