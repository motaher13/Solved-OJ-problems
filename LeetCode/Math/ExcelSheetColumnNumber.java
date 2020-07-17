package LeetCode.Math;

public class ExcelSheetColumnNumber {

    public int titleToNumber(String s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            int f=s.charAt(i)-'A'+1;
            sum=(sum*26)+f;
        }
        return sum;
    }

    public static void main(String[] args) {
        int k=(new ExcelSheetColumnNumber()).titleToNumber("ZY");
        System.out.println(k);
    }
}
