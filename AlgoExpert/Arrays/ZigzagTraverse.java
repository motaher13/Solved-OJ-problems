
import java.util.*;
/*OM13*/

class ZigzagTraverse {
  public static List<Integer> zigzagTraverse(List<List<Integer>> array) {
    int height=array.size()-1;
		int width=array.get(0).size()-1;
		
		List<Integer> out=new ArrayList<>();
		int i=0, j=0;
		int d=-1;
		while(true){
			if(i<0 || i>height || j<0 || j>width) break;
			out.add(array.get(i).get(j));
			if(d==-1){
				if(j==0 || i==height){
					i++;d=1;
					if(i>height){
						i--;j++;
					}
				}else{
					i++;j--;
				}
			}else{
				if(i==0 || j==width){
					j++;d=-1;
					if(j>width){
						j--;i++;
					}
				}else{
					i--;j++;
				}
			}
		}
		
		return out;
  }
}
