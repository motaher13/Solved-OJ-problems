package LeetCode.Math;

import java.util.Arrays;
import java.util.Comparator;

public class LargestNumber {

    public String largestNumber(int[] nums) {
        if(nums==null || nums.length==0) return "";

        nums=Arrays.stream(nums).boxed()
                .sorted((a,b)-> (""+b+a).compareTo(""+a+b))
                .mapToInt(i -> i).toArray();
        if(nums[0]==0) return "0";

        String s=Arrays.stream(nums).mapToObj(String::valueOf).reduce((a,b)->a.concat(b)).get();
        return s;
    }

    public static void main(String[] args) {
            int[] nums={3,30,34,5,9};
        System.out.println((new LargestNumber()).largestNumber(nums));
    }
}
