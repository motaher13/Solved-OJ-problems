package LeetCode.String;

public class ValidPalindrome {

    public boolean isPalindrome(String s) {
        s=s.toLowerCase();
            for(int i=0,j=s.length()-1;i<j;){
            char a=s.charAt(i);
            char b=s.charAt(j);
            if(!Character.isLetterOrDigit(a)) {i++;continue;} 
            if(!Character.isLetterOrDigit(b)) {j--;continue;}
            if(a!=b) return false;
            i++;j--;
        }
        return true;
    }

    public static void main(String[] args){
        String s="..";
        boolean i=(new ValidPalindrome()).isPalindrome(s);
        System.out.println(i);
    }
}
