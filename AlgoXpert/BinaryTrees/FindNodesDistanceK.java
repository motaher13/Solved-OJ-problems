package AlgoExp.BinaryTrees;

import java.util.ArrayList;

public class FindNodesDistanceK {

    // This is an input class. Do not edit.
    static class BinaryTree {
        public int value;
        public BinaryTree left = null;
        public BinaryTree right = null;

        public BinaryTree(int value) {
            this.value = value;
        }
    }

    public ArrayList<Integer> findNodesDistanceK(BinaryTree tree, int target, int k) {
        // Write your code here.
        ArrayList<Integer> out= new ArrayList<Integer>();
        getNodesDistanceK(tree, target, k, k, out);
        return out;
    }

    public int getNodesDistanceK(BinaryTree tree, int target,
                                 int k, int rest,
                                 ArrayList<Integer> out) {

        if(tree==null) return Integer.MIN_VALUE;

        if(tree.value==target){
            getNodesDistanceK(tree.left, target, k, k-1, out);
            getNodesDistanceK(tree.right, target, k, k-1, out);
            return k-1;
        }

        else if(rest<k){
            if(rest>0){
                getNodesDistanceK(tree.left, target, k, rest-1, out);
                getNodesDistanceK(tree.right, target, k, rest-1, out);
            }else if(rest==0)
                out.add(tree.value);
            return Integer.MIN_VALUE;
        }

        else{
            int left=getNodesDistanceK(tree.left, target, k, k, out);
            if(left<k && left!=Integer.MIN_VALUE){
                if(left==0){
                    out.add(tree.value);
                    return Integer.MIN_VALUE;
                }
                getNodesDistanceK(tree.right, target, k, left-1, out);
                return left-1;
            }else{
                int right=getNodesDistanceK(tree.right, target, k, k, out);
                if(right<k && right!=Integer.MIN_VALUE){
                    if(right==0){
                        out.add(tree.value);
                        return Integer.MIN_VALUE;
                    }
                    getNodesDistanceK(tree.left, target, k, right-1, out);
                    return right-1;
                }
            }
        }

        return k;
    }
}
