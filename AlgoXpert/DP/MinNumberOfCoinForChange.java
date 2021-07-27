package AlgoExp.DP;

import java.util.Arrays;

public class MinNumberOfCoinForChange {

    public static int minNumberOfCoinsForChange(int n, int[] denoms) {
        if(n==0) return 0;
        int[] dp=new int[n+1];
        makeChange(denoms, dp, n, 0);
        return dp[n]==0? -1:dp[n];
    }

    public static void makeChange(int coins[], int[] dp, int n, int val){
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


    public static int minNumberOfCoinsForChange2(int n, int[] denoms) {
        int[] dp=new int[n+1];
        Arrays.fill(dp, n+1);
        dp[0]=0;
        for(int i=1;i<=n;i++){
            for(int coin:denoms){
                if(coin<=i){
                    dp[i]=Math.min(dp[i-coin]+1, dp[i]);
                }
            }
        }

        return dp[n]>n? -1:dp[n];
    }


    public static int minNumberOfCoinsForChange3(int n, int[] denoms) {
        int[] dp=new int[n+1];
        Arrays.fill(dp, n+1);
        dp[0]=0;
        for(int coin:denoms){
            for(int i=1;i<=n;i++){
                if(coin<=i){
                    dp[i]=Math.min(dp[i-coin]+1, dp[i]);
                }
            }
        }

        return dp[n]>n? -1:dp[n];
    }

}
