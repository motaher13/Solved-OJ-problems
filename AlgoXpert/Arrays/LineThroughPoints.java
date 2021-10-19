package AlgoExp.Arrays;

import java.util.HashMap;
import java.util.Map;

public class LineThroughPoints {

    public int lineThroughPoints(int[][] points) {

        int mx=1;
        for(int i=0;i<points.length-1;i++){
            // for each point, count other points those creates
            // line with it with same slope
            Map<String, Integer> countMap=new HashMap<>();
            for(int j=i+1;j<points.length;j++){
                String slope=getSlope(points[i], points[j]);
                int c=countMap.getOrDefault(slope, 1);
                countMap.put(slope,c+1);
                mx=Math.max(c+1,mx);
            }
        }
        return mx;

    }

    public String getSlope(int[] a, int[] b){
        int x=a[0]-b[0];
        int y=a[1]-b[1];
        if(x==0) return "1:0";
        int gcd=getGcd(x,y);
        x=x/gcd;
        y=y/gcd;
        return y+":"+x;
    }

    public int getGcd(int x, int y){
        while(true){
            if(x==0) return y;
            if(y==0) return x;

            int temp=x;
            x=y;
            y=temp%y;
        }
    }
}
