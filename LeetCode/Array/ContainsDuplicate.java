package LeetCode.Array;

import java.util.Arrays;

public class ContainsDuplicate {

    public boolean containsDuplicate(int[] nums) {
        Arrays.sort(nums);
        for(int i=0;i<nums.length-1;i++){
            if(nums[i]==nums[i+1])
                return true;
        }
        return false;
    }

    public static void main(String[] args){
        int[] array={1,2,1,3};
        boolean output=(new ContainsDuplicate()).containsDuplicate(array);
        System.out.println(output);
    }
}
