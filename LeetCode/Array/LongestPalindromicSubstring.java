package LeetCode.Array;

public class LongestPalindromicSubstring {

    public String longestPalindrome(String s) {
        if(s==null) return null;
        if(s.length()==0) return "";
        int j,k,start=0,end=0,mx=0,finalStart=0,finalEnd=0,length;

        for(int i=0;i<s.length()-1;i++){
            if(s.charAt(i)==s.charAt(i+1)){
                start=i;end=i+1;
                if(i>0){
                    for(j=i-1,k=i+2;j>=0&&k<s.length() && s.charAt(j)==s.charAt(k);j--,k++){
                        continue;
                    }
                    start=j+1;end=k-1;
                }
                length=end-start+1;
                if(length>mx){
                    mx=length;
                    finalStart=start;finalEnd=end;
                }
            }

            if(i>0 && s.charAt(i-1)==s.charAt(i+1)){
                start=i-1;end=i+1;
                if(i>1){
                    for(j=i-2,k=i+2;j>=0&&k<s.length() && s.charAt(j)==s.charAt(k);j--,k++){
                        continue;
                    }
                    start=j+1;end=k-1;
                }
                length=end-start+1;
                if(length>mx){
                    mx=length;
                    finalStart=start;finalEnd=end;
                }
            }
        }

        if(mx==0) return s.substring(0,1);
        else return s.substring(finalStart,finalEnd+1);

    }


    public String muchClearCoding(String s) {
        if (s == null || s.length() < 1) return "";
        int start = 0, end = 0;
        for (int i = 0; i < s.length(); i++) {
            int len1 = expandAroundCenter(s, i, i);
            int len2 = expandAroundCenter(s, i, i + 1);
            int len = Math.max(len1, len2);
            if (len > end - start) {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }
        return s.substring(start, end + 1);
    }

    private int expandAroundCenter(String s, int left, int right) {
        int L = left, R = right;
        while (L >= 0 && R < s.length() && s.charAt(L) == s.charAt(R)) {
            L--;
            R++;
        }
        return R - L - 1;
    }

    public static void main(String[] args) {
        String s="aaaa";
        String k=(new LongestPalindromicSubstring()).longestPalindrome(s);
        System.out.println(k);
    }
}
