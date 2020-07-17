package LeetCode.Trees;

import java.util.ArrayList;
import java.util.List;

public class BinaryTreeInorderTraversal {

    public List<Integer> inorderTraversal(TreeNode root) {
        List<Integer> k=new ArrayList<>();
        getInorder(k,root);
        return k;
    }

    public void getInorder(List<Integer> k, TreeNode node){
        if(node==null) return;
        getInorder(k,node.left);
        k.add(node.val);
        getInorder(k,node.right);
    }

    public List<Integer> practice(TreeNode root) {
        List<Integer> k=new ArrayList<>();
        TreeNode cur=root;
        TreeNode pre,temp;
        while (cur!=null){
            if(cur.left!=null){
                pre=cur.left;
                while (pre.right!=null) pre=pre.right;
                pre.right=cur;
                temp=cur;
                cur=cur.left;
                temp.left=null;
            }
            else{
                k.add(cur.val);
                cur=cur.right;
            }
        }

        return k;
    }


    // Morris Traversal
    //doesn't recover the structure
    public List < Integer > best1(TreeNode root) {
        List < Integer > res = new ArrayList < > ();
        TreeNode curr = root;
        TreeNode pre;
        while (curr != null) {
            if (curr.left == null) {
                res.add(curr.val);
                curr = curr.right; // move to next right node
            } else { // has a left subtree
                pre = curr.left;
                while (pre.right != null) { // find rightmost
                    pre = pre.right;
                }
                pre.right = curr; // put cur after the pre node
                TreeNode temp = curr; // store cur node
                curr = curr.left; // move cur to the top of the new tree
                temp.left = null; // original cur left be null, avoid infinite loops
            }
        }
        return res;
    }

    // recovers the structure
    // https://leetcode.com/articles/binary-tree-inorder-traversal/ comment section,jianchao-li
    public List<Integer> best(TreeNode root) {
        List<Integer> nodes = new ArrayList<>();
        TreeNode cur = root;
        while (cur != null) {
            if (cur.left != null) {
                TreeNode pre = cur.left;
                while ((pre.right != null) && (pre.right != cur)) {
                    pre = pre.right;
                }
                if (pre.right == null) {
                    pre.right = cur;
                    cur = cur.left;
                } else {
                    pre.right = null;
                    nodes.add(cur.val);
                    cur = cur.right;
                }
            } else {
                nodes.add(cur.val);
                cur = cur.right;
            }
        }
        return nodes;
    }

    public static void main(String[] args) {
        TreeNode a=new TreeNode(1);
        TreeNode b=new TreeNode(2);
        TreeNode c=new TreeNode(3);
        TreeNode d=new TreeNode(4);
        TreeNode e=new TreeNode(5);
        TreeNode f=new TreeNode(6);
        TreeNode g=new TreeNode(7);
        a.left=b;a.right=c;
        b.left=d;b.right=e;
        c.left=f;c.right=g;

        List<Integer> k= (new BinaryTreeInorderTraversal()).practice(a);
        for (int m:k){
            System.out.print(m+" ");
        }
        System.out.println();

        List<List<Integer>> ab= (new BinaryTreeLevelOrderTraversal()).levelOrder(a);
        for (List<Integer> m:ab){
            System.out.println(m.toString());
        }

    }
}
