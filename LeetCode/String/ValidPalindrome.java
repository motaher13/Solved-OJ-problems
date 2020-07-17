package LeetCode.String;

public class ValidPalindrome {

    public boolean isPalindrome(String s) {
        if(s==null || s.trim().length()==0)
            return true;
        s=s.toLowerCase();
        char[] sa = s.toCharArray();
        for(int i=0,j=sa.length-1;i<j;i++,j--){
            while (!Character.isDigit(sa[i]) && !Character.isAlphabetic(sa[i])) {
                i++;
                if (i >= j) return true;
            }
            while (!Character.isDigit(sa[j]) && !Character.isAlphabetic(sa[j])) {
                j--;
                if (j <= i) return true;
            }
            if(i>=j)
                return true;
            if(sa[i]!=sa[j])
                return false;
        }
        return true;
    }

    public static void main(String[] args){
        String s="..";
        boolean i=(new ValidPalindrome()).isPalindrome(s);
        System.out.println(i);
    }
}
