package LeetCode.Array;

import java.util.*;

public class IntersectionofTwoArraysII {

    public int[] intersect(int[] nums1, int[] nums2) {
        List<Integer> out=new ArrayList<>();
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int i:nums1){
            map.put(i,map.getOrDefault(i,0)+1);
        }

        for(int i:nums2){
            if(map.get(i)!=null && map.get(i)>0){
                map.put(i,map.get(i)-1);
                out.add(i);
            }
        }

        int[] ret = new int[out.size()];
        for (int i=0; i < ret.length; i++)
            ret[i] = out.get(i);

        return ret;
    }

    public static void main(String[] args){
        int[] array={1,2,2,1,3};
        int[] array1={4,5,2,2,1};
        int[] output=(new IntersectionofTwoArraysII()).intersect(array,array1);

        for(int i=0;i<output.length;i++)
            System.out.print(output[i] + " ");
    }
}
