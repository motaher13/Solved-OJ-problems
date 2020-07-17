package LeetCode.Trees;

import java.util.HashMap;
import java.util.List;

public class ConstructBinaryTreefromPreorderandInorderTraversal {

    public TreeNode buildTree(int[] preorder, int[] inorder) {
        if(preorder.length==0) return null;
        int[] preCursor=new int[1];
        preCursor[0]=0;
        return createBuildTree(preorder,inorder,0,inorder.length-1,preCursor);
    }

    public TreeNode createBuildTree(int[] preorder,int[] inorder,int inStart,int inEnd,int[] preCursor){

        if(inStart>inEnd) return null;

        TreeNode node=new TreeNode(preorder[preCursor[0]++]);
        if(inStart==inEnd) return node;

        int nodePositionInorder=searchNodeInorder(inorder,inStart,inEnd,node.val);

        node.left=createBuildTree(preorder,inorder,inStart,nodePositionInorder-1,preCursor);
        node.right=createBuildTree(preorder,inorder,nodePositionInorder+1,inEnd,preCursor);
        return node;
    }

    private int searchNodeInorder(int[] inorder,int start,int end, int val){
        for(int i=start;i<=end;i++){
            if(inorder[i]==val) return i;
        }
        return -1;
    }
    


    

    public static void main(String[] args) {
        int[] preorder = {3,9,20,15,7};
        int[] inorder = {9,3,15,20,7};

        TreeNode k=(new ConstructBinaryTreefromPreorderandInorderTraversal()).buildTree(preorder,inorder);
        List<List<Integer>> f=(new BinaryTreeLevelOrderTraversal()).levelOrder(k);
        for(List j:f)
            System.out.println(j.toString());

    }
}
