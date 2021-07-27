class Knapsack
{ 
    // Bottom-up
    // Time O(n*w) space O(n)
    // explain https://youtu.be/9aWwoFQp-OQ

    static int knapSack(int weight, int wt[], int val[], int n){
        int[] dp=new int[weight+1];

        //doesn't work somehow
        /*for(int i=0;i<n;i++){
            //building each weight from old weight
            for(int w=0;w<=weight;w++){
                if(w-wt[i]==0 || (w-wt[i]>0 && dp[w-wt[i]]>0)){
                    dp[w]=Math.max(dp[w],dp[w-wt[i]]+val[i]);
                }
            }
        }
        return dp[weight];*/
        
        for (int i = 0; i < n; i++) {
            for (int w = weight; w >= 0; w--) {
     
                if (wt[i] <= w)
                    // finding the maximum value
                    dp[w] = Math.max(dp[w],
                                dp[w - wt[i]] + val[i]);
            }
        }
        return dp[weight];
    }



    // Time O(n*w) space O(n*w) top-down
    static int knapSack1(int w, int wt[], int val[], int n){
        int[][] dp=new int[n+1][w+1];
        return calculate1(w,wt,val,n,dp,0);
    }

    static int calculate1(int w, int wt[], int val[], int n, int[][] dp, int ind){
        if(ind>=n || w==0) return 0;
        if(dp[ind][w]!=0) return dp[ind][w];

        int includeThis=w-wt[ind]>=0? calculate1(w-wt[ind],wt,val,n,dp,ind+1)+val[ind]:0;
        int notInclThis=calculate1(w,wt,val,n,dp,ind+1);
        dp[ind][w]=Math.max(includeThis,notInclThis);
        return dp[ind][w];
    }
}