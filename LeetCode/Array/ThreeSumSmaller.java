class Solution {
    public int threeSumSmaller(int[] nums, int target) {
        Arrays.sort(nums);
        // unique indices, meaning duplicate acceptable
        int out=0;
        for(int i=0;i<nums.length-2;i++){
            for(int j=i+1, k=nums.length-1;j<k;){
                int sum=nums[i]+nums[j]+nums[k];
                if(sum<target){
                    // meaning all between j and k qualifies, so take them all
                    out+=(k-j);
                    j++; // meaning taking bigger sum
                }else{
                    k--; // meanning taking smaller sum
                }
                
                
            }
        }
        return out;
    }
}