package LeetCode.DynamicProgramming;

import java.util.Arrays;

public class LongestIncreasingSubsequence {

    // recurrsion with memorization
    // complexity n^2
    // this is not a dp cause it is not solving subproblems
    public int lengthOfLIS(int[] nums) {
        int[][] memo=new int[nums.length][nums.length];
        for(int[] i:memo) Arrays.fill(i,-1);
        return lengthOfLIS(nums,-1,0,memo);
    }

    private int lengthOfLIS(int[] nums, int pre, int cur, int[][] memo){
        if(cur>=nums.length) return 0;
        if(memo[pre+1][cur]!=-1) return memo[pre+1][cur];
        int val=0;
        if(pre<=-1 || nums[cur]>nums[pre]) val=lengthOfLIS(nums,cur,cur+1,memo)+1;
        val=Math.max(val,lengthOfLIS(nums,pre,cur+1,memo));
        return memo[pre+1][cur]=val;
    }

    // actual dp
    public int dp(int[] nums) {
        if(nums.length==0) return 0;

        int[] dp=new int[nums.length];
        for(int i=0;i<nums.length;i++){
            int mx=0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]) mx=Math.max(mx,dp[j]);
            }
            dp[i]=mx+1;
        }

        int mx=0;
        for(int i=0;i<nums.length;i++) mx=Math.max(mx,dp[i]);
        return mx;
    }



    // dp with binary tree, actually a theory
    //https://leetcode.com/articles/longest-increasing-subsequence/
    public int dpWithBinarySearch(int[] nums) {
        int[] dp=new int[nums.length];
        int len=0;
        for(int num:nums){
            int index=Arrays.binarySearch(dp,0,len,num);
            // binarySearch returns the position or -(insertion point+1)
            if(index<0){
                index=-(index+1);
            }
            dp[index]=num;
            if(index==len) len++;
        }
        return len;
    }

    public static void main(String[] args) {
        int[] arr={10,9,2,5,3,7,101,18,19};
        int k=(new LongestIncreasingSubsequence()).dpWithBinarySearch(arr);
        System.out.println(k);
    }
}
