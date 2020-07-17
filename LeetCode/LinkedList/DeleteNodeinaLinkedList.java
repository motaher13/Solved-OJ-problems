package LeetCode.LinkedList;

public class DeleteNodeinaLinkedList {

    public void deleteNode(ListNode node) {
        node.val=node.next.val;
        node.next=node.next.next;
    }

    public static void main(String[] args){
        ListNode a=new ListNode(4);
        ListNode b=new ListNode(5);
        ListNode c=new ListNode(1);
        ListNode d=new ListNode(9);
        a.next=b;
        b.next=c;
        c.next=d;
        (new DeleteNodeinaLinkedList()).deleteNode(b);
        ListNode k=a;
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}


// * Definition for singly-linked list.
//  class ListNode {
//      int val;
//      ListNode next;
//      ListNode(int x) { val = x; }
//  }