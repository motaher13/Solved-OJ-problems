package AlgoExp.Heaps;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;

public class LaptopRentals {
    // didn't use heap

    public int laptopRentals(ArrayList<ArrayList<Integer>> times) {
        int[][] needList=new int[times.size()*2][2];
        for(int i=0;i<times.size();i++){
            needList[i*2][0]=times.get(i).get(0);
            needList[i*2][1]=1;
            needList[i*2+1][0]=times.get(i).get(1);
            needList[i*2+1][1]=-1;
        }

        Comparator<int[]> comparator=Comparator.comparingInt(a->a[0]);
        comparator=comparator.thenComparingInt(a->a[1]);
        Arrays.sort(needList, comparator);

        int max=0, sum=0;
        for(int i=0;i<needList.length;i++){
            sum+=needList[i][1];
            max=Math.max(max, sum);
        }

        return max;

    }
}
