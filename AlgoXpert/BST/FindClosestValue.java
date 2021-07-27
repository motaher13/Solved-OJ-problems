
import java.util.*;
/*OM13*/

class FindClosestValue {
  public static int findClosestValueInBst(BST tree, int target) {
    BST mark=tree;
		int closest=tree.value;
		while(mark!=null){
			if(Math.abs(target-mark.value)<Math.abs(target-closest))
				closest=mark.value;
			
			if(target<mark.value){
				mark=mark.left;
			}else if(target>mark.value){
				mark=mark.right;
			}else{
				break;
			}
		}
		return closest;
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
