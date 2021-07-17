package AlgoExp.Strings;

public class LongestPalindromicSubstring {
    public static String longestPalindromicSubstring(String str) {
        if(str==null) return null;
        if(str.length()==0) return "";
        int[] out={0,1};
        for(int i=1;i<str.length();i++){
            int[] odd=checkPalindrome(str, i-1, i+1);
            int[] even=checkPalindrome(str, i-1, i);
            int[] longest= (odd[1]-odd[0])>(even[1]-even[0])? odd:even;
            out = (out[1]-out[0])>(longest[1]-longest[0])? out:longest;
        }

        return str.substring(out[0], out[1]);
    }

    public static int[] checkPalindrome(String str, int start, int end){
        while(start>=0 && end<str.length()){
            if(str.charAt(start)!=str.charAt(end)) break;
            start--;
            end++;
        }
        return new int[]{start+1, end};
    }
}
