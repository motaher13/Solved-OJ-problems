/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
class Solution {
    // preorder -> root-left-right
    // inorder -> left-root-right
    /* in preorder, root comes first, in inorder that root node divides the list in 
    left and right subtree.
    to solve this problem, we will take a node from preorder as root, find the index of it in
    inorder, and will check if the left subtree exists, if do, the next preorder node will be the left
    node. will go so on
    */
    public int prefixCursor=0;
    public Map<Integer, Integer> map=new HashMap<>();
    public TreeNode buildTree(int[] preorder, int[] inorder) {
        if(preorder.length==0) return null;
        for(int i=0;i<inorder.length;i++) map.put(inorder[i],i);
        return makeTree(preorder, 0, inorder.length-1);
    }
    
    
    private TreeNode makeTree(int[] preorder, int left, int right){
        if(left>right)return null;
        
        TreeNode node=new TreeNode(preorder[prefixCursor]);
        int index=map.get(preorder[prefixCursor]);
        prefixCursor++;
        node.left=makeTree(preorder, left, index-1);
        node.right=makeTree(preorder, index+1,right);
        return node;
    }
    
    
    
    
    
    
}