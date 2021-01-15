package LeetCode.DynamicProgramming.MinimumMaximumPathtoReachTarget;

import java.util.Arrays;

public class MinCostClimbingStairs {
    int[] dp;
    int l;
    public int minCostClimbingStairsh(int[] cost) {
        l=cost.length;
        dp=new int[l];
        Arrays.fill(dp,-1);
        return Math.min(countMinCost(cost,0),countMinCost(cost,1));
    }

    private int countMinCost(int[] cost, int i){
        if(i==l || i==l+1) return 0;
        if(dp[i]!=-1) return dp[i];
        dp[i]=cost[i]+Math.min(countMinCost(cost,i+1),countMinCost(cost,i+2));
        return dp[i];
    }

    /* bottom up*/
    public int minCostClimbingStairs(int[] cost) {
        l=cost.length;
        dp=new int[l+1];
        for(int i=2;i<=l;i++){
            dp[i]=Math.min((dp[i-2]+cost[i-2]),(dp[i-1]+cost[i-1]));
        }
        return dp[l];

    }

    public static void main(String[] args) {
        int[] a={10,2};
        System.out.println((new MinCostClimbingStairs()).minCostClimbingStairs(a));
    }
}
