package LeetCode.Trees;

import LeetCode.LinkedList.PalindromeLinkedList;

import java.util.HashMap;
import java.util.LinkedList;
import java.util.Queue;

public class MaximumDepthofBinaryTreeSolution {

    public int maxDepth(TreeNode root) {
        if (root==null) return 0;

        HashMap<TreeNode,Integer> map=new HashMap<>();
        Queue<TreeNode> q=new LinkedList<>();

        q.add(root);
        map.put(root,1);
        int maxLevel=1;

        while (q.size()>0){
            TreeNode node=q.remove();
            int level=map.get(node);
            if(node.left!=null){
                maxLevel=Math.max(maxLevel,level+1);
                map.put(node.left,level+1);
                q.add(node.left);
            }
            if(node.right!=null){
                maxLevel=Math.max(maxLevel,level+1);
                map.put(node.right,level+1);
                q.add(node.right);
            }
        }
        return maxLevel;
    }

    public int best(TreeNode root){
        if(root==null) return 0;
        return Math.max(best(root.left),best(root.right))+1;
    }

    public static void main(String[] args){
        TreeNode a=new TreeNode(3);
        TreeNode b=new TreeNode(9);
        TreeNode c=new TreeNode(20);
        TreeNode d=new TreeNode(15);
        TreeNode e=new TreeNode(7);
        TreeNode f=new TreeNode(8);
        a.left=b;a.right=c;
        c.left=d;c.right=e;
        e.left=f;

        int k= (new MaximumDepthofBinaryTreeSolution()).best(a);
        System.out.println(k);
    }
}




class TreeNode {
  int val;
  TreeNode left;
  TreeNode right;
  TreeNode() {}
  TreeNode(int val) { this.val = val; }
  TreeNode(int val, TreeNode left, TreeNode right) {
      this.val = val;
      this.left = left;
      this.right = right;
  }
}
