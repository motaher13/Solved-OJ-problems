class Solution {
    public int numSubarrayProductLessThanK(int[] nums, int k) {
        // more like a sliding window
        int count=0;
        int product=1;
        for(int i=0, j=0;j<nums.length;j++){
            product*=nums[j];
            while(product>=k & i<nums.length){ // trim from left
                product/=nums[i];
                i++;
            }
            if(i<=j)
                count+=(j-i+1); // if there are 3 elements, there will be subarray of 1,2,3 elements, as they are continuous, so combination isn't required

        }

        return count;
                
    }
}