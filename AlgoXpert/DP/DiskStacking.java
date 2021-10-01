package AlgoExp.DP.backedUp;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class DiskStacking {
    public static List<Integer[]> diskStacking(List<Integer[]> disks) {
        disks.sort((a,b)->a[0].compareTo(b[0]));

        int maxHeightInd=0;
        //dp array //set everything to their height
        int[] heightUptoDisk=new int[disks.size()];
        for(int i=0;i<heightUptoDisk.length;i++) heightUptoDisk[i]=disks.get(i)[2];

        // array to rebuild sequence
        int[] preInd=new int[disks.size()];
        Arrays.fill(preInd,Integer.MIN_VALUE);

        for(int i=1;i<disks.size();i++){
            Integer[] currentDisk=disks.get(i);
            for (int j=0;j<i;j++){
                Integer[] upperDisk=disks.get(j);
                if(validMatch(upperDisk, currentDisk)){
                    if(heightUptoDisk[i] < heightUptoDisk[j]+currentDisk[2]){
                        heightUptoDisk[i] = heightUptoDisk[j]+currentDisk[2];
                        preInd[i]=j;
                    }
                }
            }

            if(heightUptoDisk[i]>heightUptoDisk[maxHeightInd]) maxHeightInd=i;
        }

        //rebuild sequence
        List<Integer[]> out=new ArrayList<>();
        for(int i=maxHeightInd;i>Integer.MIN_VALUE;i=preInd[i])
            out.add(0,disks.get(i));

        return out;
    }

    public static boolean validMatch(Integer[] upper, Integer[] bottom){
        return upper[0]<bottom[0] && upper[1]<bottom[1] && upper[2]<bottom[2];
    }


}
