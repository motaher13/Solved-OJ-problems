package AlgoExp.DP;

import java.util.Arrays;

public class PalindromePartitioningMinCuts {
    // see algoXpert hints for explanation

    public static int palindromePartitioningMinCuts(String str) {
        // the array denotes if the string from i to j is palindrome
        boolean[][] palindrome=new boolean[str.length()][str.length()];

        for(int len=1;len<=str.length();len++){
            for(int i=0;i<=str.length()-len;i++){
                int j=i+len-1;
                if(len<3)
                    palindrome[i][j]=str.charAt(i)==str.charAt(j);
                else
                    palindrome[i][j]= (str.charAt(i)==str.charAt(j)) && palindrome[i+1][j-1];
            }
        }

        // denotes the number of needed cuts from 0 to i
        int[] cuts=new int[str.length()];
        Arrays.fill(cuts, Integer.MAX_VALUE);

        for(int i=0;i<str.length();i++){
            if(palindrome[0][i]){
                cuts[i]=0;
            } else {
                cuts[i]=cuts[i-1]+1;
                for(int j=1;j<i;j++){
                    if(palindrome[j][i] && cuts[j-1]+1<cuts[i])
                        cuts[i]=cuts[j-1]+1;
                }
            }
        }

        return cuts[str.length()-1];

    }
}
