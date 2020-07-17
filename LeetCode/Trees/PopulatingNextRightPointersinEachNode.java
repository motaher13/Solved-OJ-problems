package LeetCode.Trees;

import java.util.LinkedList;
import java.util.List;
import java.util.Queue;

public class PopulatingNextRightPointersinEachNode {

    public Node connect(Node root) {
        if(root==null) return null;
        Node last=root;
        Queue<Node> q=new LinkedList<>();
        q.add(root);
        Node pre=null;
        while (q.size()>0){
            Node t=q.remove();
            if(pre!=null) pre.next=t;
            if(t.left!=null) q.add(t.left);
            if(t.right!=null) q.add(t.right);

            if(t==last){
                pre=null;
                last=t.right;
                t.next=null;
            }else{
                pre=t;
            }
        }

        return root;
    }

    public Node best(Node root) {
        Node a=root;
        while (a!=null){
            Node current=a;
            while (current!=null){
                if(current.left!=null) {
                    current.left.next = current.right;
                    if(current.next!=null)
                        current.right.next=current.next.left;
                }
                current=current.next;
            }
            a=a.left;
        }
        return root;
    }

    public static void main(String[] args) {
        Node a=new Node(1);
        Node b=new Node(2);
        Node c=new Node(3);
        Node d=new Node(4);
        Node e=new Node(5);
        Node f=new Node(6);
        Node g=new Node(7);
        a.left=b;a.right=c;
        b.left=d;b.right=e;
        c.left=f;c.right=g;


        Node ab= (new PopulatingNextRightPointersinEachNode()).connect(a);

    }
}


// Definition for a Node.
class Node {
    public int val;
    public Node left;
    public Node right;
    public Node next;

    public Node() {}

    public Node(int _val) {
        val = _val;
    }

    public Node(int _val, Node _left, Node _right, Node _next) {
        val = _val;
        left = _left;
        right = _right;
        next = _next;
    }
};
