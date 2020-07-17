package LeetCode.Trees;

public class BinaryTreeMaximumPathSum {
    int mx=Integer.MIN_VALUE;
    public int maxPathSum(TreeNode root) {
        findMaxPathSum(root);
        return mx;
    }

    int findMaxPathSum(TreeNode node){
        if(node==null) return 0;
        int mxCurrent=Integer.MIN_VALUE;
        mxCurrent=Math.max(mxCurrent,node.val);
        int left=findMaxPathSum(node.left);
        int right=findMaxPathSum(node.right);
        mxCurrent=Math.max(mxCurrent,node.val+left);
        mxCurrent=Math.max(mxCurrent,node.val+right);
        mxCurrent=Math.max(mxCurrent,node.val+left+right);
        mx=Math.max(mx,mxCurrent);
        return Math.max(node.val,node.val+Math.max(left,right));
    }

    int best(TreeNode root) {
        if (root == null) {
            return 0;
        } else {
            int leftSubSum = Math.max(best(root.left), 0);
            int rightSubSum = Math.max(best(root.right), 0);

            int pathSum = leftSubSum + rightSubSum + root.val;
            if (pathSum > mx) {
                mx = pathSum;
            }
            return root.val + Math.max(leftSubSum, rightSubSum);
        }
    }

    public static void main(String[] args) {
        TreeNode a=new TreeNode(-10,new TreeNode(9),new TreeNode(20,new TreeNode(15),new TreeNode(7)));
        System.out.println((new BinaryTreeMaximumPathSum()).maxPathSum(a));
    }
}
