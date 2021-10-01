package AlgoExp.BinaryTrees;

public class HeightBalancedBinaryTree {

    // This is an input class. Do not edit.
    static class BinaryTree {
        public int value;
        public BinaryTree left = null;
        public BinaryTree right = null;

        public BinaryTree(int value) {
            this.value = value;
        }
    }

    public boolean heightBalancedBinaryTree(BinaryTree tree) {
        boolean[] status={true};
        checkBalancedBinaryTree(tree, status);
        return status[0];
    }



    public int checkBalancedBinaryTree(BinaryTree tree, boolean[] status) {
        if(tree==null) return 0;
        int left=checkBalancedBinaryTree(tree.left, status);
        if(!status[0]) return 0;
        int right=checkBalancedBinaryTree(tree.right, status);
        if(!status[0]) return 0;
        if(Math.abs(left-right)>1){
            status[0]=false;
            return 0;
        }
        return Math.max(left, right)+1;

    }
}
