package LeetCode.DynamicProgramming;

public class UniquePaths {

    public int uniquePaths(int m, int n) {
        int[][] count=new int[m][n];
        count[m-1][n-1]=1;
        return findUniquePaths(count,m-1,n-1,0,0);
    }

    private int findUniquePaths(int[][] count, int m,int n,int x,int y){
        if(x<0 || y<0 || x>m ||y>n) return 0;
        if(count[x][y]!=0) return count[x][y];
        return count[x][y]=findUniquePaths(count,m,n,x,y+1)+findUniquePaths(count,m,n,x+1,y);
    }

    public int best(int m, int n) {
        /*
        m=row, n=column
        we are going to calculate from last row to top row,
        each cell at the bottom row is 1,
        each cell at the right column is 1,
        for the rest, cell=rightCell+lowerCell;
        */

        if(m==1 && n==1) return 1;
        int[] dp=new int[n];

        for(int i=0;i<n;i++) dp[i]=1;

        for(int row=m-2;row>=0;row--){
            for(int column=n-2;column>=0;column--)
                dp[column]=dp[column]+dp[column+1];
        }
        return dp[0];
    }

    public static void main(String[] args) {
        int k=(new UniquePaths()).best(7,3);
        System.out.println(k);
    }
}
