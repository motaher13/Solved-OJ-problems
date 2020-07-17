package LeetCode.Array;

import java.util.HashMap;

public class TwoSum {

    public int[] twoSum(int[] nums, int target) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            int j=target-nums[i];
            int k=map.getOrDefault(j,-1);
            if(k==-1)
                map.put(nums[i],i);
            else
                return new int[]{k, i};
        }
        return null;
    }

    public static void main(String[] args){
        int[] array={2, 7, 11, 15};
        int[] b=(new TwoSum()).twoSum(array,18);
        System.out.println(b[0]+" "+b[1]);
    }
}
