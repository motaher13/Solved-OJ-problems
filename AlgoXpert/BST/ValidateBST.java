
import java.util.*;
/*OM13*/

class ValidateBST {
  public static boolean validateBst(BST tree) {
    return checkBST(tree, Integer.MIN_VALUE, Integer.MAX_VALUE);
  }
	
	public static boolean checkBST(BST node, int min, int max){
		if(node==null) return true;
		if(node.value<min || node.value>=max) return false;
		return checkBST(node.left, min, node.value) 
			&& checkBST(node.right, node.value, max);
  
	}

  static class BST {
    public int value;
    public BST left;
    public BST right;

    public BST(int value) {
      this.value = value;
    }
  }
}
