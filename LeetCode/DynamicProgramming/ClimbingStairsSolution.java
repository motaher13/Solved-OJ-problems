package LeetCode.DynamicProgramming;

public class ClimbingStairsSolution {

    public int climbStairs(int n) {
        if(n==1) return 1;
        if(n==2) return 2;
        int a=1,b=2,sum=0;
        for (int i=3;i<=n;i++){
            sum=a+b;
            a=b;b=sum;
        }
        return sum;
    }

    public static void main(String[] args){
        int k=(new ClimbingStairsSolution()).climbStairs(5);
        System.out.println(k);
    }
}
