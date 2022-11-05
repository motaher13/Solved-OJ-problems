class Solution {
    public void sortColors(int[] nums) {
        int i=0, j=nums.length-1,mid=0;
        while(mid<=j){
            if(nums[mid]==0){
                swap(nums, i,mid);
                i++;
                mid++;
            }else if(nums[mid]==1){
                mid++;
            }else{
                swap(nums, mid,j);
                j--;
            }
        }
    }
    
    private void swap(int[] nums,int i,int j){
        int c=nums[i];
        nums[i]=nums[j];
        nums[j]=c;
    }
}