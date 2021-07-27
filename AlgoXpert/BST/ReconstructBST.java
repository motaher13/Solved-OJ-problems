ReconstructBST
import java.util.*;
/*OM13*/

class ReconstructBST {
  // This is an input class. Do not edit.
  static class BST {
    public int value;
    public BST left = null;
    public BST right = null;

    public BST(int value) {
      this.value = value;
    }
  }

  public BST reconstructBst(ArrayList<Integer> preOrderTraversalValues) {
    return reconstructBst(preOrderTraversalValues, new int[]{0}, Integer.MAX_VALUE);
  }
	
	public BST reconstructBst(ArrayList<Integer> values, int[] order, int prev) {
    if(order[0]>=values.size()) return null;
		BST node=new BST(values.get(order[0]));
		order[0]++;
		if(order[0]>=values.size()) return node;
		if(values.get(order[0])<node.value)
			node.left=reconstructBst(values, order, node.value);
		if(order[0]>=values.size()) return node;
		if(values.get(order[0])>=node.value && values.get(order[0])<prev)
			node.right=reconstructBst(values, order, prev);
		return node;
  }
}
