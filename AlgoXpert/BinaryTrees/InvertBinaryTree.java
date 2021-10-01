package AlgoExp.BinaryTrees;

public class InvertBinaryTree {
    public static void invertBinaryTree(BinaryTree tree) {
        if(tree==null) return;
        invertBinaryTree(tree.left);
        invertBinaryTree(tree.right);
        BinaryTree swap=tree.left;
        tree.left=tree.right;
        tree.right=swap;
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
