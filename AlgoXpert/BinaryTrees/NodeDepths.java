package AlgoExp.BinaryTrees;

public class NodeDepths {

    public static int nodeDepths(BinaryTree root) {
        // Write your code here.
        return getNodeDepths(root, 0);
    }

    public static int getNodeDepths(BinaryTree root, int depth) {
        if(root==null) return 0;
        int leftDepth=getNodeDepths(root.left, depth+1);
        int rightDepth=getNodeDepths(root.right, depth+1);
        return leftDepth+rightDepth+depth;
    }

    static class BinaryTree {
        int value;
        BinaryTree left;
        BinaryTree right;

        public BinaryTree(int value) {
            this.value = value;
            left = null;
            right = null;
        }
    }
}
