package AlgoExp.Recursion;

public class InterweavingString {
    public static boolean interweavingStrings(String one, String two, String three) {
        if(one.length()+two.length()!=three.length()) return false;
        return checkInterweavingStrings(one, two, three, 0,0, new Boolean[one.length()+1][two.length()+1]);
    }

    public static boolean checkInterweavingStrings(String one, String two, String three,
                                                   int i, int j, Boolean[][] cache) {
        if(cache[i][j]!=null) return cache[i][j];
        int k=i+j;
        if(k==three.length()) return true;

        if(i<one.length() && one.charAt(i)==three.charAt(k)){
            cache[i][j]=checkInterweavingStrings(one, two, three, i+1,j,cache);
            if(cache[i][j]) return true;
        }

        if(j<two.length() && two.charAt(j)==three.charAt(k)){
            cache[i][j]=checkInterweavingStrings(one, two, three, i,j+1,cache);
            if(cache[i][j]) return true;
        }

        cache[i][j]=false;
        return false;
    }
}
