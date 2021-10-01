package AlgoExp.BinaryTrees;

public class MaxPathSumInBinaryTree {
    public static int maxPathSum(BinaryTree tree) {
        int[] maxVal={Integer.MIN_VALUE};
        getMaxPathSum(tree, maxVal);
        return maxVal[0];
    }

    public static int getMaxPathSum(BinaryTree tree, int[] maxVal) {
        if(tree==null) return 0;
        int left=getMaxPathSum(tree.left, maxVal);
        int right=getMaxPathSum(tree.right, maxVal);
        int maxChild=Math.max(left, right);

        int maxSumAsBranch=Math.max(maxChild+tree.value, tree.value);
        int maxSumAsRoot=Math.max(left+tree.value+right, maxSumAsBranch);

        maxVal[0]=Math.max(maxVal[0], maxSumAsRoot);
        return maxSumAsBranch;
    }

    static class BinaryTree {
        public int value;
        public BinaryTree left;
        public BinaryTree right;

        public BinaryTree(int value) {
            this.value = value;
        }
    }
}
