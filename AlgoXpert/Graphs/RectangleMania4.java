package AlgoExp.Graphs;

import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class RectangleMania4 {
    public static int rectangleMania(List<Integer[]> coords) {
        // convert to string
        int count=0;
        Set<String> strSet=new HashSet<>();
        for(Integer[] coord:coords)
            strSet.add(coord[0]+":"+coord[1]);

        for(Integer[] a:coords){
            for(Integer[] b:coords){
                if(!isUpperRight(a,b)) continue;
                String upCoordStr=a[0]+":"+b[1];
                String rightCoordStr=b[0]+":"+a[1];
                if(strSet.contains(upCoordStr) && strSet.contains(rightCoordStr))
                    count++;
            }
        }

        return count;
    }

    public static boolean isUpperRight(Integer[] a, Integer[] b) {
        return (b[0]>a[0] && b[1]>a[1]);
    }
}
