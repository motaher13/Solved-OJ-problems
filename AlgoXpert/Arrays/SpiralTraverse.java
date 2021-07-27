
import java.util.*;
/*OM13*/

class SpiralTraverse {
  public static List<Integer> spiralTraverse(int[][] array) {
    int i=0, j=0;
		int i1=0, j1=-1, i2=array.length, j2=array[0].length;
		List<Integer> out=new ArrayList<>();
		int drc=1; 
		while(i1<i2 && j1<j2){
			if(j>=j2) break;
			while(j<j2){
				out.add(array[i][j]);j++;
			}
			j--;i++;
			if(i>=i2) break;
			while(i<i2){
				out.add(array[i][j]);i++;
			}
			i--;j--;
			if(j<=j1) break;
			while(j>j1){
				out.add(array[i][j]);j--;
			}
			j++;i--;
			if(i<=i1) break;
			while(i>i1){
				out.add(array[i][j]);i--;
			}
			i++;j++;
			i1++;j1++;i2--;j2--;
		}
		
		return out;
  }
}
