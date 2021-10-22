package AlgoExp.LinkedList;

public class ShiftLinkedList {
    public static LinkedList shiftLinkedList(LinkedList head, int k) {
        int l=1;
        LinkedList listTail=head;
        while(listTail.next!=null){
            listTail=listTail.next;
            l++;
        }

        int offset=Math.abs(k)%l;
        if(offset==0) return head;
        int newTailPos=k>0? l-offset: offset;

        LinkedList newTail=head;
        for(int i=1;i<newTailPos;i++)
            newTail=newTail.next;

        LinkedList newHead=newTail.next;
        newTail.next=null;
        listTail.next=head;
        return newHead;

    }

    static class LinkedList {
        public int value;
        public LinkedList next;

        public LinkedList(int value) {
            this.value = value;
            next = null;
        }
    }
}
