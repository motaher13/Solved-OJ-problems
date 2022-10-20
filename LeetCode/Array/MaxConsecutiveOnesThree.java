class Solution {
    public int longestOnes(int[] nums, int k) {
        int i=0, j=0;
        int tolerate=0;
        int mx=Integer.MIN_VALUE;

        while(j<nums.length){
            if(nums[j]==0) tolerate++;
            while(tolerate>k){
                if(nums[i]==0) tolerate--;
                i++;
            }
            mx=Math.max(mx, j-i+1);
            j++;
        }

        return mx==Integer.MIN_VALUE? 0:mx;
    }
}