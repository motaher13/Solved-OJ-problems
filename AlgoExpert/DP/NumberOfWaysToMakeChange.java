package AlgoExp.DP;

public class NumberOfWaysToMakeChange {
    public static int numberOfWaysToMakeChange(int n, int[] denoms) {
        int[] dp=new int[n+1];
        dp[0]=1;
        for(int coin:denoms){
            for(int amount=1;amount<=n;amount++){
                if(coin<=amount){
                    dp[amount]+=dp[amount-coin];
                }
            }
        }
        return dp[n];
    }
}
