package AlgoExp.LinkedList;

public class FindLoop {
    public static LinkedList findLoop(LinkedList head) {
        // after meeting both pointer at a point, the distance from begining to the loop start
        // and the distance from meeting point to the loop start is equal
        // D==R, check the resrouce folder for screenshot

        LinkedList a=head.next;
        LinkedList b=head.next.next;
        while(a!=b){
            a=a.next;
            b=b.next.next;
        }

        a=head;
        while(a!=b){
            a=a.next;
            b=b.next;
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
