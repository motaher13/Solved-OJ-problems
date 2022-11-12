class Solution {
    public int findUnsortedSubarray(int[] nums) {
        int low=0, high=nums.length-1;

        while(low<nums.length-1 && nums[low]<=nums[low+1]) low++;
        if(low==nums.length-1) return 0;

        while(high>0 && nums[high]>=nums[high-1]) high--;

        int subMax=Integer.MIN_VALUE, subMin=Integer.MAX_VALUE;

        for(int k=low;k<=high;k++){
            subMax=Math.max(subMax,nums[k]);
            subMin=Math.min(subMin,nums[k]);
        }

        while(low>0 && subMin<nums[low-1]) low--;
        while(high<nums.length-1 && subMax>nums[high+1]) high++;

        return high-low+1;
    }
}