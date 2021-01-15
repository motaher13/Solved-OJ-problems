package LeetCode.DynamicProgramming.MinimumMaximumPathtoReachTarget;

public class MinimumPathSum {

    public int minPathSum(int[][] grid) {
        int[][] dp=new int[grid.length][grid[0].length];

        for(int i=0;i<grid.length;i++){
            for(int j=0;j<grid[i].length;j++){
                if(i==0 && j==0){
                    dp[i][j]=grid[i][j];
                    continue;
                }
                int a= (i>0)? dp[i-1][j]:Integer.MAX_VALUE;
                int b= (j>0)? dp[i][j-1]:Integer.MAX_VALUE;
                dp[i][j]=grid[i][j]+Math.min(a,b);
            }
        }

        return dp[grid.length-1][grid[0].length-1];
    }

    public static void main(String[] args) {
        int[][] a= {
                      {1},{1}
                    };

        System.out.println((new MinimumPathSum()).minPathSum(a));

    }
}
