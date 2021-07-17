
import java.util.*;
/*OM13*/

class MergeOverlappingIntervals {

  public int[][] mergeOverlappingIntervals(int[][] intervals) {
    Arrays.sort(intervals, Comparator.comparingInt(o -> o[0]));
		if(intervals.length==0) return new int[0][0];
		List<int[]> out =new ArrayList<>();
		out.add(intervals[0]);
		for(int i=1,j=0;i<intervals.length;i++){
				if(intervals[i][0]<=out.get(j)[1])
						out.get(j)[1]=Math.max(out.get(j)[1],intervals[i][1]);
				else{
					out.add(intervals[i]);
					j=out.size()-1;
				}
		}
		return out.toArray(new int[0][]);
  }
}
