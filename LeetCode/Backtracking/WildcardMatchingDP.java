package LeetCode.Backtracking;

public class WildcardMatchingDP {
    public boolean isMatch(String s, String p) {
        /* https://www.youtube.com/watch?v=3ZDZ-N0EPV0*/

        char[] str=s.toCharArray();
        char[] ptrn=p.toCharArray();

        int ptrLen=0;
        boolean isFirst=true;
        for(int i=0;i<ptrn.length;i++){
            if(ptrn[i]=='*'){
                if(isFirst){
                    ptrn[ptrLen++]=ptrn[i];
                    isFirst=false;
                }else continue;
            }else {
                ptrn[ptrLen++]=ptrn[i];
                isFirst=true;
            }
        }

        boolean dp[][]=new boolean[str.length+1][ptrLen+1];
        if(ptrLen>0 && ptrn[0]=='*') dp[0][1]=true;
        dp[0][0]=true;

        for(int i=1;i<dp.length;i++){
            for(int j=1;j<dp[0].length;j++){
                if(str[i-1]==ptrn[j-1]
                        || ptrn[j-1]=='?'){
                    dp[i][j]=dp[i-1][j-1];
                }else if(ptrn[j-1]=='*'){
                    dp[i][j]= dp[i][j-1] // * represents 0 charecter
                            || dp[i-1][j]; // * str[i-1] is part of *
                }
            }
        }

        return dp[str.length][ptrLen];
    }



    public static void main(String[] args) {
        System.out.println((new WildcardMatchingDP()).isMatch("aa","a*"));
    }
}
