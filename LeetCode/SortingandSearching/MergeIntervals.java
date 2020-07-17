package LeetCode.SortingandSearching;

import java.util.Arrays;
import java.util.Collections;
import java.util.LinkedList;

public class MergeIntervals {

    public int[][] merge(int[][] intervals) {

        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));
        int i,j,k;
        for(i=0,j=1,k=0;j<=intervals.length;j++){
            if(j==intervals.length || intervals[j][0]>intervals[i][1]){
                intervals[k][0]=intervals[i][0];
                intervals[k][1]=intervals[i][1];
                i=j;
                k++;
            }else{
                intervals[i][1]=Math.max(intervals[i][1],intervals[j][1]);
            }
        }
        int[][] newArray = Arrays.copyOfRange(intervals, 0, k);

        return newArray;
    }

    public int[][] clean(int[][] intervals) {
        Arrays.sort(intervals,(a,b)->Integer.compare(a[0],b[0]));

        LinkedList<int[]> merged = new LinkedList<>();
        for (int[] interval : intervals) {
            if (merged.isEmpty() || merged.getLast()[1] < interval[0]) {
                merged.add(interval);
            }
            else {
                merged.getLast()[1] = Math.max(merged.getLast()[1], interval[1]);
            }
        }

        return merged.toArray(new int[merged.size()][]);
    }

    public static void main(String[] args) {
        int[][] arr= {};
        int[][] out=(new MergeIntervals()).merge(arr);
        for(int i=0;i<out.length;i++)
            System.out.println(out[i][0]+" "+out[i][1]);
    }
}
