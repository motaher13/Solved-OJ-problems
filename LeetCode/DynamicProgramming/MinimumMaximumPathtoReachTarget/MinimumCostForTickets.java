package LeetCode.DynamicProgramming.MinimumMaximumPathtoReachTarget;

import java.util.Arrays;

public class MinimumCostForTickets {

    /*
    * coin change structure
    * */


    /* https://www.youtube.com/watch?v=Cnf2gdSqjJg */
    public int mincostTickets(int[] days, int[] costs) {
        int lastDay=days[days.length-1];
        int[] dp=new int[lastDay+1];
        boolean[] travelExist= new boolean[lastDay+1];
        for(int i:days) travelExist[i]=true;

        for (int i=1;i<=lastDay;i++){
            if(!travelExist[i]){
                dp[i]=dp[i-1];
            }else {
                int one=dp[Math.max(i-1,0)]+costs[0];
                int seven=dp[Math.max(i-7,0)]+costs[1];
                int thirty=dp[Math.max(i-30,0)]+costs[2];
                dp[i]=Math.min(one,Math.min(seven,thirty));
            }
        }
        return dp[lastDay];
    }




    public static void main(String[] args) {
        int[] days = {1,4,6,7,8,20};
        int[] costs = {2,7,15};

        System.out.println((new MinimumCostForTickets()).mincostTickets(days,costs));
    }
}
