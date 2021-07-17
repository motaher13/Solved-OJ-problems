package LeetCode.DynamicProgramming;

import java.util.Arrays;

public class CoinChange {


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
