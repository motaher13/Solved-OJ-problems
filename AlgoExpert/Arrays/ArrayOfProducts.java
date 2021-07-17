
import java.util.*;
/*OM13*/

class ArrayOfProducts {
  public int[] arrayOfProducts(int[] array) {
		int l=array.length;
		int[] out= new int[l];
		
		int ml=1;
		for(int i=0;i<l;i++){
			out[i]=ml;
			ml=ml*array[i];
		}
		
		ml=1;
		for(int i=l-1;i>=0;i--){
			out[i]*=ml;
			ml=ml*array[i];
		}
		
		return out; 
  }
}
