package AlgoExp.DP;

public class MaximumSumSubmatrix {
    public int maximumSumSubmatrix(int[][] matrix, int size) {
        int a=matrix.length, b=matrix[0].length;

        // each point in the matrix contains the sum from
        // (0,0) to (i,j), that means up+left-upperleft as
        // upperleft is common in up and left
        int[][] allSum = new int[a][b];
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                int up=(i-1)<0? 0:allSum[i-1][j];
                int left=(j-1)<0? 0:allSum[i][j-1];
                int upperleft=((i-1)<0 || (j-1)<0)? 0:allSum[i-1][j-1];
                allSum[i][j]=up+left+matrix[i][j]-upperleft;
            }
        }

        // convert from (0,0)to(i,j) sum to
        // (i-size,j-size)to(i,j) sum, and calculate max
        int mx=Integer.MIN_VALUE;
        for(int i=size-1;i<a;i++){
            for(int j=size-1;j<b;j++){
                int up=(i-size)<0? 0:allSum[i-size][j];
                int left=(j-size)<0? 0:allSum[i][j-size];
                int upperleft=((i-size)<0 || (j-size)<0)? 0:allSum[i-size][j-size];
                int blockSum=allSum[i][j]-up-left+upperleft;
                mx=Math.max(blockSum, mx);
            }
        }
        return mx;
    }


    public static void main(String[] args){
        int[][] matrix={{5,3,-1},{-7,3,7},{12,8,0}};
        System.out.println((new MaximumSumSubmatrix()).maximumSumSubmatrix(matrix,2));
    }
}
