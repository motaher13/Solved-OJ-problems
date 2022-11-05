class Solution {
    public int threeSumClosest(int[] nums, int target) {
        Arrays.sort(nums);
        int out=Integer.MAX_VALUE;
        for(int i=0;i<nums.length-2;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            for(int j=i+1, k=nums.length-1;j<k;){
                if(k<nums.length-1 && nums[k]==nums[k+1]){k--; continue;}
                int sum=nums[i]+nums[j]+nums[k];

                int distSum=Math.abs(sum-target);
                int distOut=Math.abs(out-target);
                if(distSum<distOut)
                 out=sum;

                if(sum<target) j++;
                else k--;
            }
        }
        return out;
    }
}