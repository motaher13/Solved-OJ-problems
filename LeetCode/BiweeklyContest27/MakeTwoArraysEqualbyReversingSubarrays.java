package LeetCode.BiweeklyContest27;

import LeetCode.String.LongestCommonPrefix;

import java.util.HashMap;

public class MakeTwoArraysEqualbyReversingSubarrays {

    public boolean canBeEqual(int[] target, int[] arr) {
        if(target==null && arr==null)
            return true;
        if(target==null || arr==null)
            return false;
        if(target.length!=arr.length)
            return false;

        HashMap<Integer,Integer> map=new HashMap<>();

        for(int i:target)
            map.put(i,map.getOrDefault(i,0)+1);

        for(int i:arr){
            int j=map.getOrDefault(i,-1);
            if(j>0)
                map.put(i,j-1);
            else
                return false;
        }
        return true;
    }

    public static void main(String[] args){
        int[] target={1,2,3};
        int[] arr={3,1,2};
        boolean k=(new MakeTwoArraysEqualbyReversingSubarrays()).canBeEqual(target,arr);
        System.out.println(k);
    }
}
