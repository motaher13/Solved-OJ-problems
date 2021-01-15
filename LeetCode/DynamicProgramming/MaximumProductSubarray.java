package LeetCode.DynamicProgramming;

public class MaximumProductSubarray {

    public int maxProduct(int[] nums) {
        int max=nums[0];
        int min=nums[0];
        int maxOut=nums[0];

        for(int i=1;i<nums.length;i++){
            if(nums[i]<0){
                int temp=max;
                max=min;
                min=temp;
            }

            max=Math.max(nums[i],max*nums[i]);
            min=Math.min(nums[i],min*nums[i]);
            maxOut=Math.max(max,maxOut);
        }
        return maxOut;
    }

    public static void main(String[] args) {
        int[] a={-1,0,0};
        System.out.println((new MaximumProductSubarray()).maxProduct(a));

    }
}
