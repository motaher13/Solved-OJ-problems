package LeetCode.Design;

import java.util.Arrays;
import java.util.concurrent.ThreadLocalRandom;

public class ShuffleanArray {
    public static void main(String[] args){
        int[] nums={1,2,3,4};
        Solution obj = new Solution(nums);
        int[] param_1 = obj.reset();
        int[] param_2 = obj.shuffle();
        System.out.println(Arrays.toString(param_2));
        param_2 = obj.shuffle();
        System.out.println(Arrays.toString(param_2));
        param_2 = obj.reset();
        System.out.println(Arrays.toString(param_2));
    }
}


class Solution {
    int[] backup;
    int[] nums;
    public Solution(int[] nums) {

        this.nums=new int[nums.length];
        this.backup=new int[nums.length];
        System.arraycopy( nums, 0,this.nums , 0, nums.length);
        System.arraycopy( nums, 0, this.backup, 0, nums.length);

    }

    /** Resets the array to its original configuration and return it. */
    public int[] reset() {
        System.arraycopy(backup, 0, nums, 0, nums.length);
        return nums;
    }

    /** Returns a random shuffling of the array. */
    public int[] shuffle() {
        for(int i=0;i<nums.length;i++){
            int j= ThreadLocalRandom.current().nextInt(0, nums.length);
            int c=nums[i];
            nums[i]=nums[j];
            nums[j]=c;
        }
        return nums;
    }
}