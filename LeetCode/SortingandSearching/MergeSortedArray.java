package LeetCode.SortingandSearching;

import java.util.ArrayList;

public class MergeSortedArray {

    public void merge(int[] nums1, int m, int[] nums2, int n) {
        ArrayList<Integer> list=new ArrayList<>();
        int i=0,j=0;
        while (i<m || j<n){
            if((j==n || nums1[i]<=nums2[j])&&i<m) {
                list.add(nums1[i]);
                i++;
            }else if((i==m || nums1[i]>nums2[j])&&j<n){
                list.add(nums2[j]);
                j++;
            }
        }
        for(i=0;i<list.size();i++){
            nums1[i]=list.get(i);
        }
    }

    public void practice(int[] nums1, int m, int[] nums2, int n){
        int a=m-1,b=n-1,c=m+n-1;

        while( a>=0 && b>=0 ){
            if(nums1[a]>nums2[b]){
                nums1[c]=nums1[a];
                a--;c--;
            }else{
                nums1[c]=nums2[b];
                b--;c--;
            }
        }
        for (;b>=0;b--,c--)
            nums1[c]=nums2[b];

    }


    public void best(int[] nums1, int m, int[] nums2, int n) {
        int l1 = m - 1;
        int l2 = n - 1;
        int res = m + n - 1;

        while((l1 >= 0) && (l2 >= 0)) {
            if(nums1[l1] < nums2[l2]) {
                nums1[res] = nums2[l2];
                res --;
                l2 --;
            } else {
                nums1[res] = nums1[l1];
                res --;
                l1--;
            }
        }

        while(l2 >=0) {
            nums1[res--] = nums2[l2--];
        }
    }



    public static void main(String[] args){
        int[] ar1={3,5,0,0};
        int[] ar2={1,2};
        (new MergeSortedArray()).practice(ar1,2,ar2,2);
        for(int i=0;i<ar1.length;i++)
            System.out.print(ar1[i] + " ");
    }
}
