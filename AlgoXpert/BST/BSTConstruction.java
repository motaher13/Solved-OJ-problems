BSTConstruction
import java.util.*;
/*OM13*/

class BSTConstruction {
  static class BST {
    public int value;
    public BST left;
    public BST right;

    public BST(int value) {
      this.value = value;
    }

    public BST insert(int value) {
    	BST mark = this;
			BST node=new BST(value);
			while(true){
				if(mark.value>value){
					if(mark.left==null){
						mark.left=node;
						break;
					}else{
						mark=mark.left;
					}
				}else{
					if(mark.right==null){
						mark.right=node;
						break;
					}else{
						mark=mark.right;
					}
				}
			}
			return this;
    }

    public boolean contains(int value) {
      BST mark = this;
			
			while(true){
				if(mark==null) return false;
				if(mark.value>value) mark=mark.left;
				else if(mark.value<value) mark=mark.right;
				else return true;
			}
    }

    public BST remove(int value) {
			remove(value, null);
			
			return this;
    }
		
		public void remove(int value, BST parent){
			if(this.value>value) {
				if(this.left!=null)
					this.left.remove(value, this);
			
			}else if(this.value<value){
				if(this.right!=null)
					this.right.remove(value, this);
			
			}else{
				if(this.right!=null){
					this.value=right.getMinValue();
					this.right.remove(this.value, this);
				}else if(this.left!=null){
					this.value=left.getMaxValue();
					this.left.remove(this.value, this);
				}else if(parent==null){
					
				}else if(parent.left==this){
					parent.left=null;
				}else if(parent.right==this){
					parent.right=null;
				}
					
			}
		}
		
		public int getMaxValue(){
			if(right==null) return this.value;
			return right.getMaxValue();
			
		}
		
		public int getMinValue(){
			if(left==null) return this.value;
			return left.getMinValue();
			
		}
  }
}
