package LeetCode.Backtracking;

public class WildcardMatching {
    public boolean isMatch(String s, String p) {
        if(s==null || p==null) return false;
        return checkMatch(s,p, 0,0);
    }

    private boolean checkMatch(String s, String p, int i,int j){
        if(i==s.length()){
            if(j==p.length()) return true;
            if(p.charAt(j)=='*') return checkMatch(s,p,i,j+1);
            return false;
        }
        if(j==p.length()) return false;

        char c=s.charAt(i), d=p.charAt(j);
        if(c==d || d=='?') return checkMatch(s,p,i+1, j+1);
        else if(d=='*') return checkMatch(s,p,i,j+1)||checkMatch(s,p,i+1,j+1)||checkMatch(s,p,i+1,j);
        return false;
    }

    public static void main(String[] args) {
        System.out.println((new WildcardMatching()).isMatch("baaabab","ba*a?"));
    }
}
