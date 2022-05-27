/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
class Solution {
    TreeNode lastDigit=null;
    // public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
    //     if(root==null) return null;
    //     TreeNode out=inorderSuccessor(root.left, p);
    //     if(out!=null) return out;
    //     if(lastDigit!=null && lastDigit.val == p.val)
    //         return root;
    //     lastDigit=root;
    //     return inorderSuccessor(root.right, p);
    // }
    
    public TreeNode inorderSuccessor(TreeNode root, TreeNode p) {
        TreeNode successor=null;
        while(root!=null){
            if(p.val>=root.val)
                root=root.right;
            else{
                successor=root;
                root=root.left;
            }
        }
        return successor;
        
        
        
        
    }
}
