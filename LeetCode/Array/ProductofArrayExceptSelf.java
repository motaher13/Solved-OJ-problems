package LeetCode.Array;

import java.util.Arrays;

public class ProductofArrayExceptSelf {
    public int[] productExceptSelf(int[] nums) {
        int[] out=new int[nums.length];

        int prev=1;
        for(int i=0;i<nums.length;i++){
            out[i]=prev;
            prev=prev*nums[i];
        }

        prev=nums[nums.length-1];
        for(int i=nums.length-2;i>=0;i--){
            out[i]=prev*out[i];
            prev=prev*nums[i];
        }
        return out;
    }

    public static void main(String[] args) {
        int[] a={1,2,3};
        a=(new ProductofArrayExceptSelf()).productExceptSelf(a);
        for(int i:a) System.out.print(i+" ");
    }
}
