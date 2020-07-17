package LeetCode.Trees;

import java.util.Arrays;
import java.util.List;

public class ConvertSortedArraytoBinarySearchTree {
    public TreeNode sortedArrayToBST(int[] nums) {
        if(nums.length==0) return null;
        return createBST(nums,0,nums.length);
    }

    public TreeNode createBST(int[] nums,int min,int max){
        if(min==max) return null;
        int length=max-min;
        int nodePoint=length/2+min;
        TreeNode node=new TreeNode(nums[nodePoint]);
        node.left=createBST(nums,min,nodePoint);
        node.right=createBST(nums,nodePoint+1,max);
        return node;
    }

    public static void main(String[] args){
        int[] arr={};
        TreeNode t=(new ConvertSortedArraytoBinarySearchTree()).sortedArrayToBST(arr);
        List<List<Integer>> k= (new BinaryTreeLevelOrderTraversal()).levelOrder(t);
        for (List<Integer> m:k){
            System.out.println(m.toString());
        }
    }
}
