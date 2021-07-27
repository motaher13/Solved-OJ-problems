
import java.util.*;
/*OM13*/

class LongestPeak {
  public static int longestPeak(int[] array) {
    int max=0, current=0, direction=-1;
		boolean peakFound=false;
		int l=array.length;
		
		for(int i=1;i<l;i++){
			if(array[i]>array[i-1]){
				if(direction==-1){
					if(peakFound)
						max=Math.max(max, current);
					current=2;
					direction=1;
					peakFound=false;
				}else{
					current++;
				}
				
			}
			
			else if(array[i]<array[i-1]){
				if(direction==1){
					direction=-1;
					if(i>1 && array[i-1]>array[i-2])
						peakFound=true;
				}
				current++;
			}
			
			else{
				if(peakFound)
						max=Math.max(max, current);
				direction=-1;
				current=0;
			}
			
		}
		
		if(peakFound) max=Math.max(max, current);
		return max;
  }
}
