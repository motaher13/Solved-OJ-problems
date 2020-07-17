package LeetCode.Trees;

import java.util.ArrayList;
import java.util.List;

public class BinaryTreeLevelOrderTraversal {

    public List<List<Integer>> levelOrder(TreeNode root) {
        List<List<Integer>> data=new ArrayList<>();
        checkLevelOrder(root,0,data);
        return data;
    }

    public void checkLevelOrder(TreeNode node,int level, List<List<Integer>> data){
        if(node==null) return;
        List<Integer> list;
        if(data.size()>level){
            list=data.get(level);
        }else {
            list=new ArrayList<>();
            data.add(list);
        }
        list.add(node.val);
        checkLevelOrder(node.left,level+1,data);
        checkLevelOrder(node.right,level+1,data);
    }

    public static void main(String[] args){
        TreeNode a=new TreeNode(1);
        TreeNode b=new TreeNode(2);
        TreeNode c=new TreeNode(2);
        TreeNode d=new TreeNode(3);
        TreeNode e=new TreeNode(4);
        TreeNode f=new TreeNode(4);
        TreeNode g=new TreeNode(3);
        a.left=b;a.right=c;
        b.left=d;b.right=e;
        c.left=f;
//        c.right=g;

        List<List<Integer>> k= (new BinaryTreeLevelOrderTraversal()).levelOrder(c);
        for (List<Integer> m:k){
            System.out.println(m.toString());
        }
    }
}
