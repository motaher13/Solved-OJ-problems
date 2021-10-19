package AlgoExp.Arrays;

import java.util.HashSet;
import java.util.Set;

public class MinimumAreaRectangle {
    public int minimumAreaRectangle(int[][] points) {
        // get every 2 points with different x and y to ensure they aren't in same axix
        // assume them as the two head of a diagonal
        // and check if the opposite diagonal exists
        int mn=Integer.MAX_VALUE;
        Set<String> pointSet = new HashSet<>();
        for(int[] point:points)
            pointSet.add(point[0]+":"+point[1]);

        for(int i=0;i<points.length-1;i++){
            for(int j=i+1;j<points.length;j++){

                if(points[i][0]==points[j][0] || points[i][1]==points[j][1])
                    continue;

                if(pointSet.contains(points[i][0]+":"+points[j][1]) &&
                        pointSet.contains(points[j][0]+":"+points[i][1])){
                    int area=Math.abs((points[i][0]-points[j][0])*(points[i][1]-points[j][1]));
                    mn=Math.min(mn,area);
                }
            }
        }

        return mn==Integer.MAX_VALUE? 0:mn;
    }
}
