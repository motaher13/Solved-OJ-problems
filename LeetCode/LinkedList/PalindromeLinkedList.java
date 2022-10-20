package LeetCode.LinkedList;

public class PalindromeLinkedList {

    //by reverse
    public boolean isPalindrome(ListNode head) {
        // go to middle, reverse the second half, check, reverse back
        if(head==null || head.next==null) return true;
        ListNode first=head, second=head.next;
        
        if(second.next==null) return second.val==first.val;
        
        while(second.next!=null){
            first=first.next;
            second=second.next;
            if(second.next!=null) second=second.next;
        }
        
        // reverse
        // first at the middle or left-middle
        // so reverse upto first
        ListNode middle=first, a=first, b=first.next;
        while(b!=null){
            ListNode temp=b.next;
            b.next=a;
            a=b;
            b=temp;
        }
        
        first=head;
        ListNode last=second;
        boolean result=true;
        while(first!=second && second!=middle){
            if(first.val!=second.val){
                result=false;
                break;
            }
            first=first.next;
            second=second.next;
        }
        
        // reverse back
        a=last;
        b=last.next;
        last.next=null;
        while(b!=middle){
            ListNode temp=b.next;
            b.next=a;
            a=b;
            b=temp;
        }
        
        return result;
        
    }

    public boolean isPalindromeRecurssive(ListNode head) {
        first=head;
        return recurssive(head);
    }
    
    private boolean recurssive(ListNode p){
        if(p!=null){
            if(!recurssive(p.next)) return false;
            if(p.val!=first.val) return false;
            first=first.next;
        }
        return true;
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
