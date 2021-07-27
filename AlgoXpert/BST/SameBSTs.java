
import java.util.*;
/*OM13*/

class SameBSTs {
  public static boolean sameBsts(List<Integer> arrayOne, List<Integer> arrayTwo) {
    if(arrayOne.size()!=arrayTwo.size()) return false;
    return checkSameBsts(0,0,Integer.MIN_VALUE, Integer.MAX_VALUE, arrayOne, arrayTwo);
  }
	
	public static boolean checkSameBsts(
			int i,
			int j,
			int minVal,
			int maxVal,
			List<Integer> arrayOne,
			List<Integer> arrayTwo) {
		
		if(i==-1 || j==-1) return i==j;
		if(arrayOne.get(i)!=arrayTwo.get(j)) return false;
		
		int a=getIdxOfFirstSmaller(arrayOne, i, minVal);
		int b=getIdxOfFirstBigger(arrayOne, i, maxVal);
    
		int c=getIdxOfFirstSmaller(arrayTwo, j, minVal);
		int d=getIdxOfFirstBigger(arrayTwo, j, maxVal);
		
		int current=arrayOne.get(i);
		boolean leftSame=checkSameBsts(a,c,minVal, current, arrayOne, arrayTwo);
		
		boolean rightSame=checkSameBsts(b,d,current, maxVal, arrayOne, arrayTwo);
    
		return leftSame && rightSame;
  }
	
	public static int getIdxOfFirstSmaller(
		List<Integer>array,
		int start, int minVal){
		for(int i=start+1; i<array.size();i++){
			if(array.get(i)<array.get(start) 
				 && array.get(i)>=minVal)
				return i;
		}
		return -1;
	}
	
	public static int getIdxOfFirstBigger(
		List<Integer>array,
		int start, int maxVal){
		for(int i=start+1; i<array.size();i++){
			if(array.get(i)>=array.get(start) 
				 && array.get(i)<maxVal)
				return i;
		}
		return -1;
	}
	
	
}
