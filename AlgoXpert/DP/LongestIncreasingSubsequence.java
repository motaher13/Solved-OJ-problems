package AlgoExp.DP;

import java.util.Arrays;
import java.util.LinkedList;
import java.util.List;

public class LongestIncreasingSubsequence {
    public static List<Integer> longestIncreasingSubsequence(int[] array) {
        // contains maxCount upto i including
        int dp[]=new int[array.length];
        int[] sequence=new int[array.length];
        Arrays.fill(sequence, -1);
        int topMx=0, topMxInd=0;

        for(int i=0;i<array.length;i++){
            int mx=0, prvSeq=-1;
            for(int j=0;j<i;j++){
                if(array[j]<array[i]){
                    if(mx<dp[j]){
                        mx=dp[j];
                        prvSeq=j;
                    }
                }
            }
            dp[i]=mx+1;
            sequence[i]=prvSeq;
            if(dp[i]>topMx){
                topMx=dp[i];
                topMxInd=i;
            }
        }

        LinkedList<Integer> out=new LinkedList<>();
        while(topMxInd!=-1){
            out.addFirst(array[topMxInd]);
            topMxInd=sequence[topMxInd];
        }

        return (List)out;

    }
}
