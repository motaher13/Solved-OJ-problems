
import java.util.*;
/*OM13*/

class SortedSquareArray {

  public int[] sortedSquaredArray(int[] array) {
    int[] out = new int[array.length];
		int i=0,j=array.length-1;
		int k=j;
		while(i<=j){
			if(Math.abs(array[i])>array[j]){
				out[k]=array[i]*array[i];
				i++;
			}else{
				out[k]=array[j]*array[j];
				j--;
			}
			k--;
		}
		return out;
  }
}
