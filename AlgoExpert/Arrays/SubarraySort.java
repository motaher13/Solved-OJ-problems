
import java.util.*;
/*OM13*/

class SubarraySort {
  public static int[] subarraySort(int[] array) {
    int leftMax=Integer.MIN_VALUE, lowRightPos=-1, rightLowest=Integer.MAX_VALUE;
		
		for(int i=0;i<array.length;i++){
			if(array[i]<leftMax){
				lowRightPos=i;
				rightLowest=Math.min(rightLowest, array[i]);
			}else{
				leftMax=array[i];
			}
		}
		if(lowRightPos!=-1){
			for(int i=0;i<array.length;i++){
				if(array[i]> rightLowest &&(i==0 ||array[i-1]<=rightLowest) )
					return new int[]{i, lowRightPos};
			}
		}
		
		return new int[]{-1, -1};
		
		
  }
}
