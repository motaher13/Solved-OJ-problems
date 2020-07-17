package LeetCode.LinkedList;

import java.util.Arrays;
import java.util.PriorityQueue;

public class MergekSortedLists {

    public ListNode mergeKLists(ListNode[] lists) {
        if(lists==null || lists.length==0) return null;
        PriorityQueue<ListNode> pq=new PriorityQueue<>((x,y)->Integer.compare(x.val,y.val));
        for(ListNode member:lists){
            if(member!=null)
                pq.add(member);
        }
        ListNode head=new ListNode();
        ListNode temp, current=head;
        while (pq.size()>0){
            temp=pq.poll();
            current.next=temp;
            current=temp;
            if(current.next!=null)
                pq.add(current.next);
        }
        return head.next;
    }


    public static void main(String[] args) {
        ListNode a=new ListNode(1,new ListNode(4,new ListNode(5)));
        ListNode b=new ListNode(1,new ListNode(3,new ListNode(4)));
        ListNode c=new ListNode(2,new ListNode(6));
        ListNode k=(new MergekSortedLists()).mergeKLists(new ListNode[]{a, b, c});
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}
