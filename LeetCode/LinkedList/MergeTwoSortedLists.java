package LeetCode.LinkedList;

public class MergeTwoSortedLists {
    public ListNode mergeTwoLists(ListNode l1, ListNode l2) {
        if(l1==null) return l2;
        else if(l2==null) return l1;

        ListNode a,b,head;
        if(l1.val<=l2.val) {head=a=l1;b=l2;}
        else {head=a=l2;b=l1;}

        while (true){
            if(b==null)
                break;
            else if(a.next==null) {
                a.next = b;
                a = b;
                b = null;
            }
            else if(a.next.val<=b.val)
                a=a.next;
            else {
                ListNode c=a.next;
                a.next=b;
                a=b;
                b=c;
            }
        }
        return head;
    }

    public ListNode mergeTwoListsEasy(ListNode list1, ListNode list2) {
        if(list1==null) return list2;
        else if(list2==null) return list1;
        ListNode head;
        if(list1.val<=list2.val){
            head=list1;
            list1=list1.next;
        }else{
            head=list2;
            list2=list2.next;
        }
        
        ListNode temp=head;
        
        while(list1!=null && list2!=null){
            if(list1.val<=list2.val){
                temp.next=list1;
                temp=temp.next;
                list1=list1.next;
            }else{
                temp.next=list2;
                temp=temp.next;
                list2=list2.next;
            }
        }
        
        if(list1!=null)
            temp.next=list1;
        
        if(list2!=null)
            temp.next=list2;
        
        return head;
    }

    public static void main(String[] args){
        ListNode a=new ListNode(1);
        ListNode b=new ListNode(2);
//        ListNode c=new ListNode(4);
        a.next=b;
//        b.next=c;

//        ListNode e=new ListNode(1);
        ListNode f=new ListNode(3);
        ListNode g=new ListNode(4);
//        e.next=f;
        f.next=g;


        ListNode k=(new MergeTwoSortedLists()).mergeTwoLists(a,f);
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }
    }
}
