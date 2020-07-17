package LeetCode.Backtracking;

public class SortColors {

    public void sortColors(int[] nums) {
        int low=0,mid=0,high=nums.length-1;
        while (mid<=high){
            if(nums[mid]==0){
                swapArray(nums,low,mid);
                low++;mid++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else if(nums[mid]==2){
                swapArray(nums,mid,high);
                high--;
            }
        }
    }

    public void sortTwoColors(int[] nums){
        int low=0,mid=0;
        while (mid<nums.length){
            if(nums[mid]==0){
                swapArray(nums,low,mid);
                low++;mid++;
            }
            else if(nums[mid]==1) mid++;
        }
    }

    private void swapArray(int[] nums,int i,int j){
        int c=nums[i];
        nums[i]=nums[j];
        nums[j]=c;
    }

    public static void main(String[] args) {
        int[] nums={0,0,1,1,0,1,0};
        (new SortColors()).sortTwoColors(nums);
        for(int i=0;i<nums.length;i++)
            System.out.print(nums[i]+" ");
    }
}
