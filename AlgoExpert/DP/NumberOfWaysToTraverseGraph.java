package AlgoExp.DP;

public class NumberOfWaysToTraverseGraph {
    /*
	// using math
	for 3*5 grid, to reach bottom right corner, necessary steps would be
	2 Right and 4 Down step. so {R,R,D,D,D,D}. or any permutation of it.
	so we will calculate the permutation of (i-1)+(j-1)
	*/
    public int numberOfWaysToTraverseGraph(int width, int height) {
        int numerator = factorial(width-1+height-1);
        int denominator = factorial(width-1)*factorial(height-1);
        return numerator/denominator;

    }

    public int factorial(int n){
        int out=1;
        for(int i=2;i<=n;i++){
            out*=i;
        }
        return out;
    }


  /*
	//using dp
	public int numberOfWaysToTraverseGraph(int width, int height) {
    int[][] dp=new int[height][width];
		for(int i=0;i<height;i++){
			for(int j=0;j<width;j++){
				if(i==0 || j==0) dp[i][j]=1;
				else
					dp[i][j]=dp[i-1][j]+dp[i][j-1];
			}
		}
		return dp[height-1][width-1];
  }*/
}
