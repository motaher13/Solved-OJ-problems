package AlgoExp.BinaryTrees;

public class BinaryTreeDiameter {
    // This is an input class. Do not edit.
    static class BinaryTree {
        public int value;
        public BinaryTree left = null;
        public BinaryTree right = null;

        public BinaryTree(int value) {
            this.value = value;
        }
    }

    public int binaryTreeDiameter(BinaryTree tree) {
        int[] maxVal={0};
        getBinaryTreeDiameter(tree, maxVal);
        return maxVal[0];
    }

    public int getBinaryTreeDiameter(BinaryTree tree, int[] maxVal) {
        if(tree==null) return 0;
        int left=getBinaryTreeDiameter(tree.left, maxVal);
        int right=getBinaryTreeDiameter(tree.right, maxVal);
        int sum=left+right;
        maxVal[0]=Math.max(sum, maxVal[0]);
        return Math.max(left, right)+1;
    }
}
