package LeetCode.Backtracking;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Subsets {

    public List<List<Integer>> subsets(int[] nums) {
        List<List<Integer>> out=new ArrayList<>();
        if(nums==null || nums.length==0) return out;
        getSubset(out,new ArrayList<Integer>(),nums,0);
        return out;
    }

    private void getSubset(List<List<Integer>> out,List<Integer>k, int[] nums,int i){
        if(i==nums.length ){
            out.add(new ArrayList<>(k));
            return;
        }

        getSubset(out,k,nums,i+1);
        k.add(nums[i]);
        getSubset(out,k,nums,i+1);
        k.remove(k.size()-1);


    }




    public static void main(String[] args) {
        int[] arr={1,2,3};
        List<List<Integer>>k =(new Subsets()).subsets(arr);
        for(List<Integer> m:k) System.out.println(m.toString());
    }
}
