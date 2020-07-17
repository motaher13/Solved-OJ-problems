package LeetCode.Trees;

public class SymmetricTree {

    public boolean isSymmetric(TreeNode root) {
        if(root==null) return true;
        return checkSymmetric(root.left,root.right);
    }

    public boolean checkSymmetric(TreeNode left,TreeNode right){
        if(left==null && right==null) return true;
        if(left==null || right==null) return false;

        return left.val==right.val && checkSymmetric(left.left,right.right) && checkSymmetric(left.right,right.left);
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
//        b.left=d;
        b.right=e;
        c.left=f;
//        c.right=g;

        boolean k= (new SymmetricTree()).isSymmetric(a);
        System.out.println(k);
    }
}
