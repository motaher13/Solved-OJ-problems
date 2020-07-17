package LeetCode.LinkedList;

public class PalindromeLinkedList {

    public boolean isPalindrome(ListNode head) {
        if(head==null|| head.next==null) return true;
        ListNode first=head,second=head.next,middle=null,last=null;

        if(second.next==null){
            if(second.val==first.val)
                return true;
            else return false;
        }

        while (second.next!=null){
            first=first.next;
            if(second.next!=null) second=second.next;
            if(second.next!=null) second=second.next;
        }

        middle=first;
        ListNode a,c=first.next;
        while (c!=null){
            a=first;
            first=c;
            c=c.next;
            first.next=a;
        }

        last=second=first;
        first=head;

        boolean p=true;
        while (true){
            if(first==second)
                break;
            if(first.val==second.val) {
                first = first.next;
                second = second.next;
            }else{
                p=false;
                break;
            }
            if(first.next==second){
                if(first.val!=second.val)
                    p=false;
                break;
            }
        }

        c=last.next;
        last.next=null;
        while (true){
            a=last;
            last=c;
            c=c.next;
            last.next=a;
            if(last==middle)
                break;
        }

        return p;

    }

    public static void main(String[] args){
        ListNode a=new ListNode(1);
        ListNode b=new ListNode(2);
        ListNode c=new ListNode(2);
        ListNode d=new ListNode(1);
        ListNode e=new ListNode(1);
        a.next=b;
        b.next=c;
        c.next=d;
        d.next=e;
        boolean out=(new PalindromeLinkedList()).isPalindrome(a);
        System.out.println(out);

        ListNode k=a;
        while (k!=null){
            System.out.println(k.val);
            k=k.next;
        }


    }
}
