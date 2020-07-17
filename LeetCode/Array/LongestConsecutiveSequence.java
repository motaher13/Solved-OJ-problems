package LeetCode.Array;

import java.util.HashSet;

public class LongestConsecutiveSequence {

    public int longestConsecutive(int[] nums) {
        if(nums==null) return 0;
        HashSet<Integer> set=new HashSet<>();
        for(int num:nums) set.add(num);
        int mxCount=0;

        for(int num:nums){
            if(!set.contains(num-1)){
                int count=0;
                int current=num;
                while (set.contains(current)){
                    count++;
                    current++;
                }
                mxCount=Math.max(mxCount,count);
            }
        }

        return mxCount;
    }

    public static void main(String[] args) {
        int[] a={100,101, 200, 1, 3, 2};
        System.out.println((new LongestConsecutiveSequence()).longestConsecutive(a));
    }
}
