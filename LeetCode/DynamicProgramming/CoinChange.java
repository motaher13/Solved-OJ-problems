package LeetCode.DynamicProgramming;

import java.util.Arrays;

public class CoinChange {

    // top down
    // go down from amount to each value possible
    public int coinChange(int[] coins, int amount) {
        if(amount<1) return 0;
        return findCoinChange(coins,amount,new int[amount+1]);  // n+1 length to get nth index;
    }

    public int findCoinChange(int[]coins, int rest, int[] count){
        if(rest<0) return -1;
        if(rest==0) return 0;
        if(count[rest]!=0) return count[rest];
        int min=Integer.MAX_VALUE;
        for(int coin:coins){
            int n=findCoinChange(coins,rest-coin,count);
            if(n>=0 && n<=min) min=n+1;
        }
        count[rest]= (min==Integer.MAX_VALUE)? -1:min;
        return count[rest];
    }


    // bottom up
    public int bottomUp(int[] coins, int amount) {
        int[] dp=new int[amount+1];
        Arrays.fill(dp,amount+1);
        dp[0]=0;
        for(int value=1;value<=amount;value++){
            for(int coin:coins){
                if(value>=coin){
                    dp[value]=Math.min(dp[value],dp[value-coin]+1);
                }
            }
        }
        return dp[amount]>amount? -1:dp[amount];
    }

    public static void main(String[] args) {
        int[] arr={1,2,5};
        int k=(new CoinChange()).bottomUp(arr,11);
        System.out.println(k);
    }
}
