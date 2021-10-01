package AlgoExp.BinaryTrees;

public class FlattenBinaryTree4 {
    public static BinaryTree flattenBinaryTree(BinaryTree root) {
        BinaryTree head=new BinaryTree(0);
        getFlattenBinaryTree(root, head);
        BinaryTree temp=head.right;
        temp.left=null;
        return temp;
    }

    public static BinaryTree getFlattenBinaryTree(BinaryTree root, BinaryTree prev) {
        if(root==null) return prev;
        BinaryTree leftReturn=getFlattenBinaryTree(root.left, prev);
        leftReturn.right=root;
        root.left=leftReturn;
        return getFlattenBinaryTree(root.right, root);

    }

    // This is the class of the input root. Do not edit it.
    static class BinaryTree {
        int value;
        BinaryTree left = null;
        BinaryTree right = null;

        public BinaryTree(int value) {
            this.value = value;
        }
    }
}
