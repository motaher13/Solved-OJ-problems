package LeetCode.DynamicProgramming.MinimumMaximumPathtoReachTarget;

public class MinimumFallingPathSum {

    public int minFallingPathSum(int[][] A) {
        for(int i=1;i<A.length;i++){
            for (int j=0;j<A[0].length;j++){
                int a= j>0? A[i-1][j-1]:Integer.MAX_VALUE;
                int b= A[i-1][j];
                int c= j<A[i].length-1? A[i-1][j+1]:Integer.MAX_VALUE;

                A[i][j]+=Math.min(a,Math.min(b,c));
            }
        }
        int min=Integer.MAX_VALUE;
        int i=A.length-1;
        for(int j=0;j<A[0].length;j++)
            min=Math.min(min,A[i][j]);

        return min;
    }

    public static void main(String[] args) {
        int[][] a={{1,2}};
        System.out.println((new MinimumFallingPathSum()).minFallingPathSum(a));
    }
}
