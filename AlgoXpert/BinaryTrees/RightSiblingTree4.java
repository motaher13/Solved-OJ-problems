package AlgoExp.BinaryTrees;

public class RightSiblingTree4 {

    public static BinaryTree rightSiblingTree(BinaryTree root) {
        makeRightSiblingTree(root, null, false);
        return root;
    }

    public static void makeRightSiblingTree(BinaryTree node
            , BinaryTree parent, boolean isLeftChild) {
        if(node==null) return;

        BinaryTree left=node.left;
        BinaryTree right=node.right;
        makeRightSiblingTree(left, node, true);

        if(parent==null) node.right=null;
        else if(isLeftChild) node.right=parent.right;
        else{
            if(parent.right==null) node.right=null;
            else node.right=parent.right.left;
        }

        makeRightSiblingTree(right, node, false);
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
