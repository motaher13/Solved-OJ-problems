package LeetCode.Trees;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.Stack;

public class BinaryTreeZigzagLevelOrderTraversal {

    public List<List<Integer>> zigzagLevelOrder(TreeNode root) {
        List<List<Integer>> k=new ArrayList<>();
        if(root==null) return k;

        Stack<TreeNode> leftStack=new Stack<>();
        Stack<TreeNode> rightStack=new Stack<>();

        leftStack.push(root);
        List<Integer> f=new ArrayList<>(Arrays.asList(root.val));
        k.add(f);

        TreeNode t;
        while (leftStack.size()>0 || rightStack.size()>0){
            f=new ArrayList<>();
            while (leftStack.size()>0){
                t=leftStack.pop();
                if(t.right!=null){
                    f.add(t.right.val);
                    rightStack.push(t.right);
                }
                if(t.left!=null){
                    f.add(t.left.val);
                    rightStack.push(t.left);
                }
            }
            if(f.size()>0) k.add(f);


            f=new ArrayList<>();
            while (rightStack.size()>0){
                t=rightStack.pop();
                if(t.left!=null){
                    f.add(t.left.val);
                    leftStack.push(t.left);
                }
                if(t.right!=null){
                    f.add(t.right.val);
                    leftStack.push(t.right);
                }
            }
            if(f.size()>0) k.add(f);
        }

        return k;

    }

    //EASIER
    public List<List<Integer>> zigzagLevelOrderDFS(TreeNode root) {
        List<List<Integer>> out=new ArrayList<>();
        dfs(out, root, 0);
        return out;
    }
    
    private void dfs(List<List<Integer>> out, TreeNode node, int level){
        if(node==null) return;
        if(level>=out.size()){
            List<Integer> list=new LinkedList<>();
            list.add(node.val);
            out.add(list);
        }else{
            if(level%2==0)
                out.get(level).add(node.val);
            else
                out.get(level).add(0,node.val);
        }
        dfs(out, node.left, level+1);
        dfs(out, node.right, level+1);
        
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
//        b.left=d;b.right=e;
        c.left=f;c.right=g;


        List<List<Integer>> ab= (new BinaryTreeZigzagLevelOrderTraversal()).zigzagLevelOrder(a);
        for (List<Integer> m:ab){
            System.out.println(m.toString());
        }

    }
}
