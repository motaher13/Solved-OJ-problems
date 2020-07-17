package LeetCode.Trees;

public class LowestCommonAncestorofaBinaryTree {
    int foundCount=0;
    TreeNode ans=null;

    public TreeNode lowestCommonAncestor(TreeNode root, TreeNode p, TreeNode q) {
        return checkLowestCommonAncestor(root,p,q);
    }

    private TreeNode checkLowestCommonAncestor(TreeNode current, TreeNode p, TreeNode q){
        if(current==null) return null;
        int foundChild=0;
        TreeNode child1=checkLowestCommonAncestor(current.left,p,q);
        if(child1!=null){
            if(foundCount==2) return child1;
            foundChild++;
        }
        TreeNode child2=checkLowestCommonAncestor(current.right,p,q);
        if(child2!=null){
            if(foundCount==2) return child2;
            foundChild++;
        }
        if(foundChild==2){
            foundCount=2;
            return current;
        }
        if(current==p || current==q){
            if(foundChild==1) foundCount=2;
            return current;
        }
        if(foundChild==1) return current;
        return null;


    }

    // best recursive
    private boolean recurseTree(TreeNode currentNode, TreeNode p, TreeNode q) {

        if (currentNode == null) {
            return false;
        }
        int left = this.recurseTree(currentNode.left, p, q) ? 1 : 0;
        int right = this.recurseTree(currentNode.right, p, q) ? 1 : 0;
        int mid = (currentNode == p || currentNode == q) ? 1 : 0;
        if (mid + left + right >= 2) {
            this.ans = currentNode;
        }
        return (mid + left + right > 0);
    }

    public static void main(String[] args) {
        TreeNode a=new TreeNode(3);
        TreeNode b=new TreeNode(5);
        TreeNode c=new TreeNode(1);
        TreeNode d=new TreeNode(6);
        TreeNode e=new TreeNode(2);
        TreeNode f=new TreeNode(7);
        TreeNode g=new TreeNode(4);
        TreeNode h=new TreeNode(0);
        TreeNode i=new TreeNode(8);
        a.left=b;a.right=c;
        b.left=d;b.right=e;
        e.left=f;e.right=g;
        c.left=h;c.right=i;

        System.out.println((new LowestCommonAncestorofaBinaryTree()).lowestCommonAncestor(e,f,g).val);

    }
}
