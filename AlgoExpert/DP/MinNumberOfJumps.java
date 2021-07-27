package AlgoExp.DP;

public class MinNumberOfJumps {

    //greedy solution
    public static int minNumberOfJumps(int[] array) {
        if(array.length==1) return 0;
        int mxReach=array[0];
        int steps=array[0];
        int jumps=1;

        for(int i=1;i<array.length;i++){
            mxReach=Math.max(mxReach,array[i]+i);
            if(steps==i && i<array.length-1){
                // no jump necessary if we reach the last position;
                jumps++;
                steps=mxReach;
            }
        }
        return jumps;

    }



	/*
	//dp solution
  public static int minNumberOfJumps(int[] array) {
    int[] dp=new int[array.length];
		return calculateJump(dp, array, 0);
  }

	public static int calculateJump(int[] dp, int[] array, int pos){
		if(pos>=array.length-1) return 0;
		if(dp[pos]!=0) return dp[pos];
		int mn=Integer.MAX_VALUE-1;
		for(int i=1;i<=array[pos];i++){
			mn=Math.min(mn, 1+calculateJump(dp, array, pos+i));
		}

		dp[pos]=mn;
		return dp[pos];
	}
	*/
}
