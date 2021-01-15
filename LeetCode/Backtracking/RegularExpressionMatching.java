package LeetCode.Backtracking;

public class RegularExpressionMatching {
    int dp[][];

    public boolean isMatchRecursive(String s, String p) {
        if(p.isEmpty()) return s.isEmpty();

        boolean firstCharMatch= (!s.isEmpty() && (s.charAt(0)==p.charAt(0)|| p.charAt(0)=='.'));

        if(p.length()>=2 && p.charAt(1)=='*'){
            return (isMatchRecursive(s,p.substring(2)) || (firstCharMatch && isMatchRecursive(s.substring(1),p)));
        }else {
            return firstCharMatch && isMatchRecursive(s.substring(1),p.substring(1));
        }
    }



    public boolean isMatch(String s, String p) {
        dp =new int[s.length()+1][p.length()+1];
        return  checkMatch(0,0,s,p);
    }

    public boolean checkMatch(int i, int j, String s, String p){
        /* 1-> match, 2-> not*/
        if(dp[i][j]!=0) return dp[i][j]==1;

        boolean out=false;
        if(j==p.length()){
            out= i==s.length();
        }else {

            boolean firstCharMatch = (i != s.length()) && (s.charAt(i) == p.charAt(j) || p.charAt(j) == '.');

            if (j < p.length() - 1 && p.charAt(j + 1) == '*') {
                out = checkMatch(i, j + 2, s, p) || (firstCharMatch && checkMatch(i + 1, j, s, p));
            } else {
                out = firstCharMatch && checkMatch(i + 1, j + 1, s, p);
            }
        }

        dp[i][j]=(out? 1:2);
        return out;
    }






    public static void main(String[] args) {
        System.out.println((new RegularExpressionMatching()).isMatch("ab","c*ab"));
//        String s="";
//        System.out.println(s.substring(1));
    }
}
