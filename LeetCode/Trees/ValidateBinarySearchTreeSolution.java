package LeetCode.Trees;

public class ValidateBinarySearchTreeSolution {
    //handle edge case with minus 1
    public boolean isValidBST(TreeNode root) {
        return checkBST(root,-2147483648L,2147483647L);
    }


    public boolean checkBST(TreeNode node,long min,long max){
        if(node==null) return true;
        return node.val>=min && node.val<=max && checkBST(node.left,min,(long)node.val-1) && checkBST(node.right,(long)node.val+1,max);
    }

    // handle edge case with null
    public boolean isValidBST(TreeNode root) {
        return check(root, null, null);
    }
    
    private boolean check(TreeNode root, Integer min, Integer max){
        
        if(root==null) return true;
        if((min==null || root.val>min) && (max==null || root.val<max))
            return (check(root.left, min, root.val) && check(root.right, root.val, max));
        return false;
    }


//    public boolean isValidBST(TreeNode root) {
//        return checkBST(root,-2147483649L,2147483648L);
//    }
//
//
//    public boolean checkBST(TreeNode node,long min,long max){
//        if(node==null) return true;
//        if(node.val<=min || node.val>=max) return false;
//
//        return checkBST(node.left,min,node.val) && checkBST(node.right,node.val,max);
//    }

    public static void main(String[] args){
        TreeNode a=new TreeNode(-2147483648);
        TreeNode b=new TreeNode(6);
        TreeNode c=new TreeNode(8);
        TreeNode d=new TreeNode(-2147483648);
        TreeNode e=new TreeNode(9);
        TreeNode f=new TreeNode(2147483647);
//        TreeNode f=new TreeNode(6);
       d.left=a;
//       d.right=c;
//       c.left=b;c.right=e;

        boolean k= (new ValidateBinarySearchTreeSolution()).isValidBST(d);
        System.out.println(k);
    }
}

