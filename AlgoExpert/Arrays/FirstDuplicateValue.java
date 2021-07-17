
import java.util.*;
/*OM13*/

class FirstDuplicateValue {

  public int firstDuplicateValue(int[] array) {
    for(int i=0;i<array.length;i++){
			int a=Math.abs(array[i]);
			if(array[a-1]<0) return a;
			array[a-1]*=-1;
		}
		return -1;
  }
}
