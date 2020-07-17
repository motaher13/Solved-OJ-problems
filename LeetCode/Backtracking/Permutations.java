package LeetCode.Backtracking;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;
import java.util.stream.Collectors;

public class Permutations {

    public List<List<Integer>> permute(int[] nums) {
        List<List<Integer>> out=new ArrayList<>();
        if(nums==null || nums.length==0) return out;
        doPermutate(out,nums,0);
        return out;
    }

    private void doPermutate(List<List<Integer>> out, int[] nums,int i){
        if(i==nums.length-1){
            out.add(Arrays.stream(nums).boxed().collect(Collectors.toList()));
            return;
        }

        for(int j=i;j<nums.length;j++){
            swap(nums,i,j);
            doPermutate(out,nums,i+1);
            swap(nums,i,j);
        }


    }

    private void swap(int[] nums,int i,int j){
        int c=nums[i];
        nums[i]=nums[j];
        nums[j]=c;
    }

    public static void main(String[] args) {
        int[] arr={1,2,3};
        List<List<Integer>>k =(new Permutations()).permute(arr);
        for(List<Integer> m:k) System.out.println(m.toString());
    }
}
