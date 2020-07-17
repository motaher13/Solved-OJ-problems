package LeetCode.String;

public class ReverseInteger {

    public int reverse(int x) {
        int a=0;
        while (x!=0){
            int b=a*10+x%10;
            if(b/10!=a)
                return 0;
            a=b;
            x/=10;
        }
        return a;
    }


    public int best(int x) {
        int rev = 0;
        while (x != 0) {
            int pop = x % 10;
            x /= 10;
            if (rev > Integer.MAX_VALUE/10 || (rev == Integer.MAX_VALUE / 10 && pop > 7)) return 0;
            if (rev < Integer.MIN_VALUE/10 || (rev == Integer.MIN_VALUE / 10 && pop < -8)) return 0;
            rev = rev * 10 + pop;
        }
        return rev;
    }

    public static void main(String[] args) {
        int a=1534236469;
        int b=(new ReverseInteger()).reverse(a);
        System.out.println(b);
    }
}
