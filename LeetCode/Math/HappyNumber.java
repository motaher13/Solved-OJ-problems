package LeetCode.Math;

public class HappyNumber {

    // it's acutually a two pointer cycle problem. like cycle in linkedlist. so solve it that way

    public boolean isHappy(int n) {
        while(true){
            int slow=n, fast=n;
            do{
                slow=getsquared(slow);
                fast=getsquared(getsquared(fast));
            }while(slow!=fast);

            return slow==1;
        }
    }

    private int getsquared(int n){
        int squaresum=0;
        while(n>0){
            int last=n%10;
            squaresum+=last*last;
            n/=10;
        }
        return squaresum;
    }

    /*
     * What's the biggest number that could have a next value bigger than itself? Well we know it has to be less than 243243243, from the analysis we did previously. Therefore, we know that any cycles must contain numbers smaller than 243243243, as anything bigger could not be cycled back to. With such small numbers, it's not difficult to write a brute force program that finds all the cycles.

If you do this, you'll find there's only one cycle: 4→16→37→58→89→145→42→20→44 \rightarrow 16 \rightarrow 37 \rightarrow 58 \rightarrow 89 \rightarrow 145 \rightarrow 42 \rightarrow 20 \rightarrow 44→16→37→58→89→145→42→20→4. All other numbers are on chains that lead into this cycle, or on chains that lead into 111.

Therefore, we can just hardcode a HashSet containing these numbers, and if we ever reach one of them, then we know we're in the cycle. There's no need to keep track of where we've been previously.
     * 
     */
    public boolean isHappyShortcut(int n) {
        while (true){
            int squareSum=0;
            while (n>0){
                int rightDigit=n%10;
                squareSum+=(rightDigit*rightDigit);
                n/=10;
            }
            if(squareSum==1 || squareSum==7) return true;
            if(squareSum<10) return false;
            n=squareSum;
        }
    }

    public static void main(String[] args) {
        boolean k=(new HappyNumber()).isHappy(1111111);
        System.out.println(k);
    }
}
