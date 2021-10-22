package AlgoExp.LinkedList;

public class RearrangeLinkedList {
    public static LinkedList rearrangeLinkedList(LinkedList head, int k) {
        LinkedList smallA=null, smallB=null, bigA=null, bigB=null, eqA=null, eqB=null, cur=head;
        while(cur!=null){
            if(cur.value==k){
                if(eqA==null) {
                    eqA=cur;
                    eqB=cur;
                }else{
                    eqB.next=cur;
                    eqB=cur;
                }
            }

            if(cur.value<k){
                if(smallA==null) {
                    smallA=cur;
                    smallB=cur;
                }else{
                    smallB.next=cur;
                    smallB=cur;
                }
            }

            if(cur.value>k){
                if(bigA==null) {
                    bigA=cur;
                    bigB=cur;
                }else{
                    bigB.next=cur;
                    bigB=cur;
                }
            }

            cur=cur.next;
        }

        if(smallB!=null){
            smallB.next=eqA;
            if(eqA==null)
                smallB.next=bigA;
        }
        if(eqB!=null) eqB.next=bigA;
        if(bigB!=null) bigB.next=null;
        return smallA==null? (eqA==null? bigA:eqA):smallA;

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
