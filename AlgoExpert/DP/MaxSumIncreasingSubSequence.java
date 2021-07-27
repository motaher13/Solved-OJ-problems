package AlgoExp.DP;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class MaxSumIncreasingSubSequence {
    /*
		the theory is to follow the longest_increasing_subsequence problem,
		but storing the subsequence, we are storing the sum in dp. and
		while saving the sum, we are also saving the previous index as
		sequence.
	*/
    public static List<List<Integer>> maxSumIncreasingSubsequence(int[] nums) {
        int[] dp=new int[nums.length];
        int[] sequence=new int[nums.length];
        Arrays.fill(sequence,Integer.MIN_VALUE);
        int mxSumInd=0;
        for(int i=0;i<nums.length;i++){
            int mxSum=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i] && dp[j]>mxSum) {
                    mxSum = dp[j];
                    sequence[i]=j;
                }
            }
            dp[i]=mxSum+nums[i];
            if(dp[i]>dp[mxSumInd]) mxSumInd=i;
        }

        List<List<Integer>> out=new ArrayList<>();
        out.add(Arrays.asList(dp[mxSumInd]));
        List<Integer> data=new ArrayList<>();
        for (int k=mxSumInd;k!=Integer.MIN_VALUE;k=sequence[k]){
            data.add(0,nums[k]);
        }
        out.add(data);

        return out;
    }
}
