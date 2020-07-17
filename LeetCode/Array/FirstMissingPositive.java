package LeetCode.Array;

public class FirstMissingPositive {

    public int firstMissingPositive(int[] nums) {
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=i+1){
                int replace=nums[i];
                int j=replace-1;
                while (j>=0 && j<nums.length && nums[j]!=j+1){
                    int c=replace;
                    replace=nums[j];
                    nums[j]=c;
                    j=replace-1;
                }
            }
        }
        for(int i=0;i<nums.length;i++){
            if(nums[i]!=i+1) return i+1;
        }
        return nums.length+1;
    }

    public static void main(String[] args) {
        int[] a={1};
        System.out.println((new FirstMissingPositive()).firstMissingPositive(a));
    }
}
