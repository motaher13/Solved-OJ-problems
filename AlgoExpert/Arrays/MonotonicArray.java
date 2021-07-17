
import java.util.*;
/*OM13*/

class MonotonicArray {
  public static boolean isMonotonic(int[] array) {
		int k=0 ,j=0;
		for(int i=1;i<array.length;i++){
			if(array[i]==array[i-1]) continue;
			if(array[i]>array[i-1]) j=1;
			else j=-1;
			if(k==0) k=j;
			else if(k!=j) return false;
		}
		return true;
  }
}
