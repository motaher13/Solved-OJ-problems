package AlgoExp.DP;

import java.util.ArrayList;
import java.util.List;

public class LongestCommonSubSequence {
    public static List<Character> longestCommonSubsequence(String str1, String str2) {
    /*
			almost like -edit distance/levensthien deistance-
			if a charecter does match, just add the value, else
			get the bigger one from up or left.
			to rebuild the string, if the value in dp matches with
			the top then it brought from top, go there, else go left
			else this element is new, add it to the list
		*/

        int[][] dp=new int[str1.length()+1][str2.length()+1];

        for(int i=1;i<=str1.length();i++){
            for(int j=1;j<=str2.length();j++){
                if(str1.charAt(i-1)==str2.charAt(j-1))
                    dp[i][j]=dp[i-1][j-1]+1;
                else
                    dp[i][j]=Math.max(dp[i][j-1],dp[i-1][j]);
            }
        }

        //rebuild

        List<Character> out= new ArrayList<>();
        int i=str1.length(),j=str2.length();
        while(i>0 && j>0){
            if(dp[i][j]==dp[i-1][j]) i--;
            else if(dp[i][j]==dp[i][j-1]) j--;
            else{
                out.add(0,str1.charAt(i-1));
                i--;j--;
            }
        }

        return out;
    }
}
