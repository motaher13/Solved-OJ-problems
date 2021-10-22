package AlgoExp.LinkedList;

public class MergeLinkedList {
    public static class LinkedList {
        int value;
        LinkedList next;

        LinkedList(int value) {
            this.value = value;
            this.next = null;
        }
    }

    public static LinkedList mergeLinkedLists(LinkedList a, LinkedList b) {
        LinkedList c=new LinkedList(0);
        LinkedList head=c;

        while(a!=null || b!=null){
            if(b==null || (a!=null && a.value<=b.value)){
                c.next=a;
                c=a;
                a=a.next;
            }else if(a==null || (b!=null && b.value<a.value)){
                c.next=b;
                c=b;
                b=b.next;
            }
        }
        return head.next;
    }
}
