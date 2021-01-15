package LeetCode.Math;

import java.math.BigInteger;
import java.util.HashMap;
import java.util.Map;

public class MaxPointsonaLine {
    int[][] points;
    HashMap<HashMap<Integer,Integer>,Integer> lineToPoint=new HashMap<>();

    public int maxPoints(int[][] points) {
        this.points=points;
        int maxPoints=0;
        for(int i=0;i<points.length;i++){
            lineToPoint.clear();
            maxPoints=Math.max(countMaxPointsAmongLinesThroughPoint(i),maxPoints);
        }

        return maxPoints;
    }

    private int countMaxPointsAmongLinesThroughPoint(int i){
        int count=1;
        int duplicate=0;

        for(int j=i+1;j<points.length;j++){
            if(points[i][0]==points[j][0] && points[i][1]==points[j][1]){ duplicate++; continue;}

            int[] slope=findSlope(i,j);
            HashMap<Integer,Integer> key=new HashMap<>();
            key.put(slope[0],slope[1]);
            lineToPoint.put(key,lineToPoint.getOrDefault(key,1)+1);
        }

        if(lineToPoint.size()>0)
            count=lineToPoint.values().stream().max(Integer::compare).get();
        return count+duplicate;
    }

    private int[] findSlope(int i, int j){
        int difX=points[i][0]-points[j][0];
        int difY=points[i][1]-points[j][1];
        if(difX<0){ difX=-difX;difY=-difY;}

        if(difX==0) return new int[]{0, 0};
        if(difY==0) return new int[]{Integer.MAX_VALUE,Integer.MAX_VALUE};

        int gcd= BigInteger.valueOf(difX).gcd(BigInteger.valueOf(difY)).intValue();

        return new int[]{difX / gcd, difY / gcd};

    }



    public int maxPointsbest(int[][] points) {

        int n=points.length;
        if(n<2) return n;
        int max=1;


        Map<Double,Integer> map;
        for(int i=1;i<n;i++)
        {
            map=new HashMap<>();
            int same=0;
            int curr=1;
            for(int j=0;j<i;j++)
            {
                int dx=points[i][0]-points[j][0];
                int dy=points[i][1]-points[j][1];
                Double slope;
                if(dx==0 && dy==0)
                {
                    same++;
                    curr++;
                    continue;
                }
                else if(dx==0)
                {
                    slope=Double.MAX_VALUE;
                }
                else
                {
                    slope=(double) dy/(double)dx;
                }
                int hits=map.getOrDefault(slope,1)+1;
                map.put(slope,hits);
                curr=Math.max(curr,hits+same);
            }

            max=Math.max(max,curr);
        }

        return max;

    }

    public static void main(String[] args) {
        int[][] a={{1,1},{2,2},{3,3},{1,2},{1,4},{1,5}};
        System.out.println((new MaxPointsonaLine().maxPoints(a)));
    }
}
