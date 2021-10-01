package AlgoExp.BinaryTrees;

import java.util.function.Function;

public class IterativeInOrderTraversal4 {
    public static void iterativeInOrderTraversal(
            BinaryTree tree, Function<BinaryTree, Void> callback) {

        boolean goingUp=false;
        while(tree!=null){
            if(tree.left!=null && !goingUp){
                tree=tree.left;
            }else{
                callback.apply(tree);
                if(tree.right!=null){
                    tree=tree.right;
                    goingUp=false;
                }
                else{
                    goingUp=true;
                    BinaryTree temp=tree;
                    tree=tree.parent;
                    while(tree!=null && tree.right==temp){
                        temp=tree;
                        tree=tree.parent;
                    }
                }
            }
        }
    }

    static class BinaryTree {
        public int value;
        public BinaryTree left;
        public BinaryTree right;
        public BinaryTree parent;

        public BinaryTree(int value) {
            this.value = value;
        }

        public BinaryTree(int value, BinaryTree parent) {
            this.value = value;
            this.parent = parent;
        }
    }
}
