package AlgoExp.DP;

import java.lang.reflect.Array;
import java.util.Arrays;

public class NumbersInPi {
    public static int numbersInPi(String pi, String[] numbers) {
        int[] dp=new int[pi.length()];
        int val= calculate(0,dp,pi,numbers);
        if(val==pi.length()+1) return -1;
        return val-1;
        // -1 because the space count will be 1 less then parts count
    }

    public static int calculate(int pos, int[] dp, String pi, String[] numbers){
        if(pos>=pi.length()) return 0;
        if(dp[pos]!=0) return dp[pos];
        int mn=pi.length()+1;
        for(String number:numbers){
            if(isSubstring(pi,number,pos))
                mn=Math.min(mn, calculate(pos+number.length(),dp,pi,numbers)+1);
        }
        dp[pos]=mn;
        return dp[pos];
    }

    public static boolean isSubstring(String pi, String number, int pos){
        if(pos+number.length()>pi.length()) return false;
        return pi.substring(pos, pos+number.length()).equals(number);
    }
}
// abcde cd 2 2+2