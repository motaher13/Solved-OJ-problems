package LeetCode.LinkedList;

import java.util.ArrayList;
import java.util.Collection;
import java.util.Collections;
import java.util.List;

public class SortList {

    public ListNode sortList(ListNode head) {
        if(head==null) return null;
        List<ListNode> list=new ArrayList<>();
        ListNode temp=head;
        while (temp!=null){
            list.add(temp);
            temp=temp.next;
        }
        Collections.sort(list,(a,b)->a.val-b.val);
        temp=new ListNode();
        head=temp;
        for (ListNode item:list){
            temp.next=item;
            temp=item;
        }
        temp.next=null;
        return head.next;

    }

    public static void main(String[] args) {
        ListNode a=new ListNode(8);
        ListNode k=(new SortList()).sortList(a);
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}
