
import java.util.*;
/*OM13*/

class TwoNumberSum {
  public static int[] twoNumberSum(int[] array, int targetSum) {
    Map<Integer, Integer> m = new HashMap<>();
		for(int i=0;i<array.length;i++) m.put(array[i],i);
		for(int i=0;i<array.length;i++){
			int b = targetSum-array[i];
			Integer k = m.get(b);
			if(k!=null && k!=i)
				return new int[]{array[i],b};
		}
		return new int[0];
  }
}
