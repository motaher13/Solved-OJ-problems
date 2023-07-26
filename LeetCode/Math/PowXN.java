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
    // https://leetcode.com/problems/powx-n/solutions/19563/iterative-logn-solution-with-clear-explanation/
    public double best(double x,int n){
        long N=n; //as we want to handle a case for int.min, when it's rotated with -1, it wont' cross the limit and we will get the real data
        if(n<0){
            x=1/x;
            N*=-1;
        }
        
        double result=1;
        while(N>0){
            if(N%2==1)
                result*=x;
            x*=x;
            N=N/2;
        }
        return result;
    }


    public static void main(String[] args) {
        System.out.println((new PowXN()).best(2.00000
                ,-2147483648));
    }
}
