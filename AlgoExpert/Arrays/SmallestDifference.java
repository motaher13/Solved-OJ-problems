
import java.util.*;
/*OM13*/

class SmallestDifference {
  public static int[] smallestDifference(int[] arrayOne, int[] arrayTwo) {
    Arrays.sort(arrayOne);
		Arrays.sort(arrayTwo);
		int a=0, b=0, i=0, j=0, dif=2147483647;
		while(i<arrayOne.length && j< arrayTwo.length){
			int d=Math.abs(arrayTwo[j]-arrayOne[i]);
			if(d<dif){
				dif=d; a=arrayOne[i]; b=arrayTwo[j];
			}
			if(arrayTwo[j]==arrayOne[i]) return new int[]{a, b};
			else if(arrayTwo[j]<=arrayOne[i])j++;
			else i++;
		}
		
		return new int[]{a, b};
  }
}
