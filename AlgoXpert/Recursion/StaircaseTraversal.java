package AlgoExp.Recursion;

import java.util.Arrays;

public class StaircaseTraversal {
    //best O(n) time | O(n) space

    public int staircaseTraversal(int height, int maxSteps) {
        // ways to reaching a step is summation of the ways of previous steps under reach

        int[] waysToReach=new int[height+1];
        waysToReach[0]=1;
        int sum=0;
        for(int pos=1;pos<=height;pos++){
            /* shift the window one step further */
            int start=pos-maxSteps-1;
            int end=pos-1;

            if(start>=0) sum-=waysToReach[start];
            sum+=waysToReach[end];
            /*  */

            waysToReach[pos]=sum;
        }

        return waysToReach[height];

    }

    public int ddstaircaseTraversal(int height, int maxSteps) {
        int[] dp=new int[height+1];
        Arrays.fill(dp, -1);
        return computeStaircaseTraversal(height, maxSteps, 0, dp);
    }

    public int computeStaircaseTraversal(int height, int maxSteps, int pos, int[] dp) {
        if(pos>height) return 0;
        if(pos==height) return 1;
        if(dp[pos]!=-1) return dp[pos];
        int sum=0;
        for(int i=1;i<=maxSteps;i++){
            sum+=computeStaircaseTraversal(height, maxSteps, pos+i, dp);
        }
        dp[pos]=sum;
        return sum;
    }
}
