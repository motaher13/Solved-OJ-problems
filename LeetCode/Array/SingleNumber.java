package LeetCode.Array;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class SingleNumber {

    public int singleNumber(int[] nums) {
        Set<Integer> s=new HashSet<>();
        for(int i=0;i<nums.length;i++){
            if(s.contains(nums[i]))
                s.remove(nums[i]);
            else s.add(nums[i]);
        }

        Iterator<Integer> it=s.iterator();
        return it.next();
    }

    public int best(int[] nums){
        // a xor b xor a = b
        int c=0;
        for(int i=0;i<nums.length;i++){
            c=c^nums[i];
        }
        return c;

    }

    public static void main(String[] args){
//        int[] array={1,2,3,1,2,3,4};
//        int output=(new SingleNumber()).best(array);
        int output=~2;
        System.out.println(output);
    }
}
