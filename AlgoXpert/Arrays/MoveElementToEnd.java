
import java.util.*;
/*OM13*/

class MoveElementToEnd {
  public static List<Integer> moveElementToEnd(List<Integer> array, int toMove) {
  	//doesn't mutate the order
		for(int i=0,j=0;i<array.size() && j<array.size();){
			if(array.get(j)!=toMove) j++;
			else if(i<j) i=j+1;
			else if(array.get(i)==toMove) i++;
			else{
				array.set(j, array.get(i));
				array.set(i,toMove);
			}
		}
		
		return array;
  }
}
