package AlgoExp.LinkedList;

public class NodeSwap {
    // This is an input class. Do not edit.
    public static class LinkedList {
        public int value;
        public LinkedList next;

        public LinkedList(int value) {
            this.value = value;
            this.next = null;
        }
    }

    // time O(n)| space O(1)
    public LinkedList nodeSwap(LinkedList head) {
        LinkedList tempNode=new LinkedList(0);
        tempNode.next=head;
        LinkedList prevNode=tempNode;

        while(prevNode.next!=null && prevNode.next.next!=null){
            LinkedList a=prevNode.next;
            LinkedList b=prevNode.next.next;

            a.next=b.next;
            b.next=a;
            prevNode.next=b;

            prevNode=a;
        }

        return tempNode.next;
    }


    // time O(n)| space O(n)
    public LinkedList nodeSwapa(LinkedList head) {
        if(head==null || head.next==null) return head;

        LinkedList nextNode=head.next;
        head.next=nodeSwap(head.next.next);
        nextNode.next=head;

        return nextNode;
    }
}
