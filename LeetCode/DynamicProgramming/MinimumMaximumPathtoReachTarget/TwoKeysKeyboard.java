package LeetCode.DynamicProgramming.MinimumMaximumPathtoReachTarget;

public class TwoKeysKeyboard {

    public int minSteps(int n) {
        if(n==1) return 0;

        int[] dp=new int[n+1];
        return countMinSteps(1,1,dp,n)+1;
    }

    private int countMinSteps(int cbCount,int pastedCount, int[] dp, int n){
        int total=cbCount+pastedCount;
        if(total==n) return 1;
        if(total>n) return -1;

        int a=countMinSteps(cbCount,total,dp,n);
        if(a==-1) return dp[cbCount]=-1;

        int b=0;
        if(dp[total]!=-1) b=countMinSteps(total,total,dp,n);
        if(b==-1 || b==0) b=Integer.MAX_VALUE-2;
        return dp[cbCount]=Math.min(a+1,b+2);
    }

    public static void main(String[] args) {
        System.out.println((new TwoKeysKeyboard()).minSteps(9));
    }
}
