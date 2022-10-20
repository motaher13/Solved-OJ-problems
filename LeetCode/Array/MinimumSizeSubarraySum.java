class Solution {
    public int minSubArrayLen(int target, int[] nums) {
        int i=0, j=0;
        int sum=0;
        int size=0, mn=Integer.MAX_VALUE;
        while(j<nums.length){
            sum+=nums[j];
            size++;
            while(sum>=target && i<=j){
                mn=Math.min(mn, size);
                sum-=nums[i];
                i++;
                size--;
            }
            j++;
        }
        return mn==Integer.MAX_VALUE? 0:mn;
    }
}