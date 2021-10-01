package AlgoExp.BinaryTrees;

import java.util.ArrayList;
import java.util.List;

public class BranchSum {

    // This is the class of the input root. Do not edit it.
    public static class BinaryTree {
        int value;
        BinaryTree left;
        BinaryTree right;

        BinaryTree(int value) {
            this.value = value;
            this.left = null;
            this.right = null;
        }
    }

    public static List<Integer> branchSums(BinaryTree root) {
        // Write your code here.
        ArrayList<Integer> out= new ArrayList<>();
        getSum(root, out, 0);
        return out;
    }

    public static void getSum(BinaryTree root, ArrayList<Integer> out, int sum){
        if(root==null) return;

        sum+=root.value;
        if(root.left==null && root.right==null){
            out.add(sum);
            return;
        }
        getSum(root.left, out, sum);
        getSum(root.right, out, sum);
        sum-=root.value;
    }
}
