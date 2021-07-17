
import java.util.*;
/*OM13*/

class ThreeNumberSum {
  public static List<Integer[]> threeNumberSum(int[] array, int targetSum) {
    List<Integer[]> out=new ArrayList<>();
		int l=array.length;
		Arrays.sort(array);
		for(int i=0;i<l-2;i++){
			int j=i+1, k=l-1;
			while(j<k){
				if(array[j]==array[j-1]) j++;
				else if(k<l-1 && array[k]==array[k+1]) k--;
				else if(array[i]+array[j]+array[k]<targetSum) j++; 
				else if(array[i]+array[j]+array[k]>targetSum) k--;
				else{
					out.add(new Integer[]{array[i], array[j], array[k]});
					j++;k--;
				} 
			}
		}
		
		return out;
  }
}
