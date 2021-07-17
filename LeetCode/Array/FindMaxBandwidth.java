package Practice;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.Comparator;
import java.util.List;

public class FindMaxBandwidth {

    /* https://leetcode.com/discuss/interview-question/124554/Find-Max-Bandwidth/*/
    public int calculateMaxBandwidth(int[][] data){
        /* startTime -> plus bandwidth*/
        /* endTime -> minus bandwidth*/
        int[][] timeBandList=new int[data.length*2][2];
        for(int i=0;i<data.length;i++){
            timeBandList[i*2][0]=data[i][0];
            timeBandList[i*2][1]=data[i][2];
            timeBandList[i*2+1][0]=data[i][1];
            timeBandList[i*2+1][1]=-1*data[i][2];
        }

        Arrays.sort(timeBandList, Comparator.comparingInt(o->o[0]));
        int max=0,current=0;
        for(int i=0;i<timeBandList.length;i++){
            current+=timeBandList[i][1];
            max=Math.max(max,current);
        }
        return max;
    }

    public static void main(String[] args){
        int[][] data={{1,30, 2},{31,60, 4},{61,120, 3},
                    {1,20,2},{21,40,4},{41,60,5},{61,120,3},
                    {1,60,4},{61,120,4}};
        System.out.println((new FindMaxBandwidth()).calculateMaxBandwidth(data));
    }
}
