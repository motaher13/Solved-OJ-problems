package AlgoExp.DP;

public class MaxProfitWithKTransactions {

    public static int maxProfitWithKTransactionsNotSpaceOptimized(int[] prices, int k) {
        // see resources folder for explanation
        if(prices.length==0) return 0;

        int dp[][]=new int[k+1][prices.length];
        for(int i=1;i<=k;i++){
            int maxPrevTran=Integer.MIN_VALUE; // the maximum (-price+profit) until this day until this transaction
            for(int j=1;j<prices.length;j++){
                maxPrevTran=Math.max(maxPrevTran, -prices[j-1]+dp[i-1][j-1]);
                dp[i][j]=Math.max(dp[i][j-1], maxPrevTran+prices[j]);
            }
        }

        return dp[k][prices.length-1];
    }


    public static int maxProfitWithKTransactions(int[] prices, int k) {
        // see resources folder for explanation
        int l=prices.length;
        if(l==0) return 0;
        int[] evenProfits=new int[l];
        int[] oddProfits=new int[l];

        int[] currentProfits;
        int[] previousProfits;

        for(int i=1;i<=k;i++){
            int maxPrevTran=Integer.MIN_VALUE; // the maximum (-price+profit) until this day until this transaction

            currentProfits = i%2==0? evenProfits:oddProfits;
            previousProfits = i%2==0? oddProfits:evenProfits;

            for(int j=1;j<l;j++){
                maxPrevTran=Math.max(maxPrevTran, -prices[j-1]+previousProfits[j-1]);
                currentProfits[j]=Math.max(currentProfits[j-1], maxPrevTran+prices[j]);
            }
        }

        return k%2==0? evenProfits[l-1]:oddProfits[l-1];
    }
}
