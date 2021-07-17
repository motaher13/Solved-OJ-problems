
import java.util.*;
/*OM13*/

class NonConstructibleChanges {

  public int nonConstructibleChange(int[] coins) {
    Arrays.sort(coins);
		
		int max=0;
		for(int i=0;i<coins.length;i++){
			if(coins[i]>(max+1)) return max+1;
		
			max=max+coins[i];
		}
		return max+1;
  }
}

// 1 1 2 3 5 7 22