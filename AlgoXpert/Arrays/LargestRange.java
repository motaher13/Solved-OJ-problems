
import java.util.*;
/*OM13*/

class LargestRange {
  public static int[] largestRange(int[] array) {
    Map<Integer, Boolean> map=new HashMap<>();
		int max=0, a=0, b=0;
		
		for(int num:array)
			map.put(num, true);
		
		for(int num:array){
			if(!map.get(num)) continue;
			
			int range=0, j=num, k=num+1;
			while(map.containsKey(j)){
				range++;
				map.put(j, false);
				 j--;
			}
			
			while(map.containsKey(k)){
				range++;
				map.put(k, false);
				k++;
			}
			
			if(range>max){
				max=range;
				a=j+1;
				b=k-1;
			}
		}
		
		return new int[]{a, b};
  }
}
