package LeetCode.LinkedList;

import java.util.HashMap;

public class CopyListwithRandomPointer {

    public Node copyRandomList(Node head) {
        if(head==null) return null;

        Node orgCurrent=head,temp, copyHead=new Node(0);
        Node copycurrent=copyHead;
        HashMap<Node,Node> map=new HashMap<>();
        while (orgCurrent!=null){
            temp=new Node(orgCurrent.val);
            map.put(orgCurrent,temp);
            copycurrent.next=temp;
            copycurrent=temp;
            orgCurrent=orgCurrent.next;
        }
        copycurrent.next=null;
        copyHead=copyHead.next;
        copycurrent=copyHead;
        orgCurrent=head;

        while (orgCurrent!=null){
            if(orgCurrent.random==null) copycurrent.random=null;
            else copycurrent.random=map.get(orgCurrent.random);
            copycurrent=copycurrent.next;
            orgCurrent=orgCurrent.next;
        }
        return copyHead;

    }

    public static void main(String[] args) {
        Node a=new Node(7);
        Node b=new Node(13);
        Node c=new Node(11);
        Node d=new Node(10);
        Node e=new Node(1);
        a.next=b; a.random=null;
        b.next=c; b.random=a;
        c.next=d; c.random=e;
        d.next=e; d.random=c;
        e.next=null; e.random=a;
        Node k=(new CopyListwithRandomPointer()).copyRandomList(a);
        while (k!=null){
            System.out.println(k.val);

            k=k.next;
        }
    }
}


class Node {
    int val;
    Node next;
    Node random;

    public Node(int val) {
        this.val = val;
        this.next = null;
        this.random = null;
    }
}