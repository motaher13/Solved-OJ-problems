ValidateSubsequence
import java.util.*;
/*OM13*/

class ValidateSubsequence {
  public static boolean isValidSubsequence(List<Integer> array, List<Integer> sequence) {
    int j=0;
		for(int i=0;i<array.size() && j<sequence.size();i++){
			if(array.get(i)==sequence.get(j)) j++;
		}
		 return j==sequence.size();
  }
}
