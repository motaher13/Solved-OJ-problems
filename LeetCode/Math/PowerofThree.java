package LeetCode.Math;

public class PowerofThree {

    public boolean isPowerOfThree(int n) {
        if(n==0) return false;
        double a=Math.log10(n)/Math.log10(3);
        return a==Math.floor(a);
    }

    public boolean best(int n) {
        return n > 0 && 1162261467 % n == 0;  //3^19=1162261467, every power of 3 must be its divisor
    }

    public static void main(String[] args){
//        boolean a= (new PowerofThree()).isPowerOfThree(243);
//        System.out.println(a);
        System.out.println(Math.log(81));
        System.out.println(Math.log10(81));
    }
}
