package AlgoExp.BinaryTrees;

public class FindSuccessor {
    // This is an input class. Do not edit.
    static class BinaryTree {
        public int value;
        public BinaryTree left = null;
        public BinaryTree right = null;
        public BinaryTree parent = null;

        public BinaryTree(int value) {
            this.value = value;
        }
    }

    public BinaryTree findSuccessor(BinaryTree tree, BinaryTree node) {
        if(node.right!=null){
            BinaryTree a=node.right;
            while(a.left!=null) a=a.left;
            return a;
        }else{
            while(node!=null){
                BinaryTree parent=node.parent;
                if(parent==null) return null;
                if(parent.left==node) return parent;
                node=node.parent;
            }
        }

        return null;
    }
}
