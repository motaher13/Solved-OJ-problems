package LeetCode.SortingandSearching;

import java.lang.reflect.Array;
import java.util.Arrays;

public class WiggleSortII {

    public void wiggleSort(int[] nums) {
        if(nums==null || nums.length==0) return;
        Arrays.sort(nums);

        int l=nums.length;
        int[] temp=new int[l];
        int left=(l-1)/2;
        int right=l-1;

        for(int i=0;i<l;i++){
            if((i&1)==0){
                temp[i]=nums[left];
                left--;
            }else {
                temp[i]=nums[right];
                right--;
            }
        }

        System.arraycopy(temp,0,nums,0,l);
    }

    public void wiggleSortk(int[] nums) {

        int n=nums.length;
        int[] aux =  nums.clone();
        int idx=n-1;

        Arrays.sort(aux);
        for(int i=1;i<n;i+=2)
        {
            nums[i]=aux[idx--];
        }
        for(int i=0;i<n;i+=2)
        {
            nums[i]=aux[idx--];
        }

    }

    public static void main(String[] args) {
        int[] a={4,4,4,5,5,6,6,7};
        (new WiggleSortII()).wiggleSortk(a);
        for(int i:a) System.out.print(i+" ");
        System.out.println();
    }
}
