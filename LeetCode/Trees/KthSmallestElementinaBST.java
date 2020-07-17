package LeetCode.Trees;

import java.util.List;
import java.util.Stack;

public class KthSmallestElementinaBST {

    public int kthSmallest(TreeNode root, int k) {
        if(root==null) return 0;
        int[] count={0};
        return  checkKthSmallest(root,k,count);
    }

    public int checkKthSmallest(TreeNode root, int k,int[] count){
        if(root==null) return -1;
        int out=checkKthSmallest(root.left,k,count);
        if(count[0]==k) return out;
        count[0]++;
        if(count[0]==k) return root.val;
        out=checkKthSmallest(root.right,k,count);
        if(count[0]==k) return out;
        return -1;
    }

    public int best(TreeNode root, int k) {

        Stack<TreeNode> s=new Stack();
        TreeNode a=root;
        while (true){
            while (a!=null) {s.push(a); a=a.left;}
            a=s.pop();
            if(--k==0) return a.val;
            a=a.right;
        }

    }

    public static void main(String[] args) {
        TreeNode a=new TreeNode(1);
        TreeNode b=new TreeNode(3);
        TreeNode c=new TreeNode(2,a,b);
        TreeNode d=new TreeNode(5);
        TreeNode e=new TreeNode(7);
        TreeNode f=new TreeNode(6,d,e);
        TreeNode g=new TreeNode(4,c,f);


        int ab= (new KthSmallestElementinaBST()).best(g,2);
        System.out.println(ab);


    }
}
