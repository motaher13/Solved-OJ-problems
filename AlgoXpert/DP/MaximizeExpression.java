package AlgoExp.DP;

import java.util.*;

class MaximizeExpression {

    public int maximizeExpression(int[] array) {
        int l=array.length;
        if(l==0) return 0;
        int[][] dp= new int[l][4];

        int a=Integer.MIN_VALUE;
        for(int i=0;i<l;i++){
            a=Math.max(a,array[i]);
            dp[i][0]=a; // max a from 0-i
        }

        int ab=Integer.MIN_VALUE;
        for(int i=1;i<l;i++){
            ab=Math.max(ab,dp[i-1][0]-array[i]); // dp[i-1][0]-> max a untill i; b-> array[i]
            dp[i][1]=ab; // max a-b from 0-i
        }

        int abc=Integer.MIN_VALUE;
        for(int i=2;i<l;i++){
            abc=Math.max(abc,dp[i-1][1]+array[i]);// dp[i-1][1]-> max a-b untill i; c-> array[i]
            dp[i][2]=abc;// max a-b+c from 0-i
        }

        int abcd=Integer.MIN_VALUE;
        for(int i=3;i<l;i++){
            abcd=Math.max(abcd,dp[i-1][2]-array[i]);// dp[i-1][2]-> max a-b+c untill i; d-> array[i]
            dp[i][3]=abcd;// max a-b+c-d from 0-i
        }

        return dp[l-1][3];

    }




}
