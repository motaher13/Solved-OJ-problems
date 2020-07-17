package LeetCode.Others;

public class SumofTwoIntegers {

    public int getSum(int a, int b) {
        /* explanation https://www.youtube.com/watch?v=qq64FrA2UXQ
         c= and operator -> carry bits. left shift it to find where it have be actually applied
         b= xor operator -> actual summation operation
         a=c
         again do the operation until there is no carry -> c==0;*/

        while (a!=0){
            int c= a & b;
            b= a ^ b;

            c=c<<1;
            a=c;
        }
        return b;


    }

    public static void main(String[] args) {
        System.out.println((new SumofTwoIntegers()).getSum(2147483647,2147483647));
    }
}
