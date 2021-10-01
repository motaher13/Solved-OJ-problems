package AlgoExp.BinaryTrees;

import java.util.Stack;

public class CompareLeafTraversal4 {

    // This is an input class. Do not edit.
    static class BinaryTree {
        public int value;
        public BinaryTree left = null;
        public BinaryTree right = null;

        public BinaryTree(int value) {
            this.value = value;
        }
    }

    public boolean compareLeafTraversal(BinaryTree tree1, BinaryTree tree2) {
        Stack<BinaryTree> sa=new Stack<>();
        Stack<BinaryTree> sb=new Stack<>();

        sa.push(tree1);
        sb.push(tree2);

        while(sa.size()>0 && sb.size()>0){
            if(getLeafNode(sa).value!=getLeafNode(sb).value) return false;
        }

        return sa.size()==sb.size();


    }

    public BinaryTree getLeafNode(Stack<BinaryTree> st) {

        BinaryTree current=st.pop();
        while(!isLeaf(current)){
            if(current.right!=null) st.push(current.right);
            if(current.left!=null) st.push(current.left);

            current=st.pop();
        }

        return current;

    }



    public boolean isLeaf(BinaryTree node){
        return (node.left==null && node.right==null);
    }
}
