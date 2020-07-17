package LeetCode.Math;

public class PowXN {
    // recursive //causes stack overflow
    public double myPow(double x, int n) {
        if(n==0) return 1;
        if(n<0) return 1/myPow(x,-n);
        double p=myPow(x,n/2);
        if(n%2==0) return p*p;
        else return (x*p*p);
    }

    // trick
    public double best(double x,int n){
        if (n == Integer.MIN_VALUE && x > 1) return 0;
        if(n<0) return 1.0/processBest(x,-n);
        return processBest(x,n);
    }

    public double processBest(double x,int n){
        double result=1;

        while (n>0){
            if(n%2==1) result*=x;
            x=x*x;
            n=n/2;
        }
        return result;
    }

    public double k(double x, int n) {
        if(n==0)return 1.0;

        if(n<0){
            return 1/(x*k(x,-(n+1)));
        }

        if((n&1)==0){//n is even
            return k(x*x, n/2);
        }else{//odd
            return x*k(x*x,(n-1)/2);
        }

    }

    public static void main(String[] args) {
        System.out.println((new PowXN()).best(2.00000
                ,-2147483648));
    }
}
