package AlgoExp.Recursion;

public class NthFibonacci {
    public static int getNthFib(int n) {
        int[] lastTwo={0,1};
        if(n<=2) return lastTwo[n-1];
        for(int i=2;i<n;i++){
            int next=lastTwo[0]+lastTwo[1];
            lastTwo[0]=lastTwo[1];
            lastTwo[1]=next;
        }
        return lastTwo[1];
    }
}
