
import java.util.*;
/*OM13*/

class FindKthLargestValue {
  // This is an input class. Do not edit.
  static class BST {
    public int value;
    public BST left = null;
    public BST right = null;

    public BST(int value) {
      this.value = value;
    }
  }

  public int findKthLargestValueInBst(BST tree, int k) {
    BST out=iterateBst(tree, k, new int[]{0});
		return out.value;
  }
	
	public BST iterateBst(BST node, int k, int[] order) {
    if(node==null) return null;
		BST out=iterateBst(node.right, k, order);
		if(out!=null) return out;
		order[0]++;
		if(order[0]==k) return node;
		return iterateBst(node.left, k, order);
  }
}
