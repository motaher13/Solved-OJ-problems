package AlgoExp.LinkedList;

public class SumOfLinkedList {
    public static class LinkedList {
        public int value;
        public LinkedList next;

        public LinkedList(int value) {
            this.value = value;
            this.next = null;
        }
    }

    public LinkedList sumOfLinkedLists(LinkedList a, LinkedList b) {
        LinkedList out=new LinkedList(0);
        LinkedList head=out;
        int carry=0;
        while(true){
            if(a!=null){
                out.value+=a.value;
                a=a.next;
            }
            if(b!=null){
                out.value+=b.value;
                b=b.next;
            }
            out.value+=carry;
            carry=out.value/10;
            out.value=out.value%10;
            if(a==null && b==null && carry==0) break;
            out.next=new LinkedList(0);
            out=out.next;
        }
        return head;
    }
}
