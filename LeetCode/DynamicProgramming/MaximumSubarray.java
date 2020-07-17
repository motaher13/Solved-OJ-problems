package LeetCode.DynamicProgramming;

public class MaximumSubarray {

    public int maxSubArray(int[] nums) {
        if(nums.length==0) return 0;
        int max=0;
        int sum=0;
        sum+=nums[0];
        max=sum;
        for(int i=1;i<nums.length;i++){
            if(sum+nums[i]>nums[i]) sum+=nums[i];
            else sum=nums[i];
            max=Math.max(max,sum);
        }
        return max;
    }

    public static void main(String[] args){
        int[] a={-3,-4,-2};
        int k=(new MaximumSubarray()).maxSubArray(a);
        System.out.println(k);
    }
}
