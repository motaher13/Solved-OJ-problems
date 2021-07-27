
import java.util.*;
/*OM13*/

class ValidateThreeNodes {
  // This is an input class. Do not edit.
  static class BST {
    public int value;
    public BST left = null;
    public BST right = null;

    public BST(int value) {
      this.value = value;
    }
  }

  public boolean validateThreeNodes(BST nodeOne, BST nodeTwo, BST nodeThree) {
    BST a = nodeOne;
		BST c = nodeThree;
		while(true){
			if(a== nodeTwo || c==nodeTwo) break;
			if(a==c || (a==null && c==null)) return false;
			
			if(a!=null)
				a = nodeTwo.value<a.value? a.left:a.right;
			if(c!=null)
				c = nodeTwo.value<c.value? c.left:c.right;
		
		}
		
		BST b=nodeTwo;
		BST d= a==nodeTwo? nodeThree:nodeOne;
		
		while(true){
			if(b==d) break;
			if(b==null) return false;
			b = d.value<b.value? b.left:b.right;
		}
		
    return true;
  }
}
