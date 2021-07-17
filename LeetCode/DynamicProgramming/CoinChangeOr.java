package LeetCode.DynamicProgramming;

import java.util.Arrays;

public class CoinChangeOr {

    public int coinChange(int[] denoms, int n) {
        if(n==0) return 0;
        int[] dp=new int[n+1];
        makeChange(denoms, dp, n, 0);
        return dp[n]==0? -1:dp[n];
    }

    public void makeChange(int coins[], int[] dp, int n, int val){
        for(int i=0;i<coins.length;i++){
            if((n-val)>=coins[i]){
                int cur=val+coins[i];
                if(dp[val]+1<dp[cur] || dp[cur]==0){
                    dp[cur]=dp[val]+1;
                    makeChange(coins, dp,n, cur);
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] arr={1,2,5};
        int k=(new CoinChange()).bottomUp(arr,11);
        System.out.println(k);
    }
}
