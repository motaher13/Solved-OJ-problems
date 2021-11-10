package AlgoExp.Sort;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class MergeSort {
    // complexity always time O(nlog(n)) | space O(nlog(n))
    public int[] mergeSort(int[] array) {
        doMergeSort(array, 0, array.length);
        return array;
    }

    public void doMergeSort(int[] array, int start, int end){
        // end == lastIdx+1
        if(end-start<=1) return;
        int middle=start+(end-start)/2;
        doMergeSort(array, start, middle);
        doMergeSort(array, middle, end);
        mergeArrays(array, start, middle, end);
    }

    public void mergeArrays(int[] array, int start, int middle, int end){
        List<Integer> sortedList=new ArrayList<>();

        int left=start;
        int right=middle;

        while(left<middle && right<end){
            if(array[left]<=array[right])
                sortedList.add(array[left++]);
            else
                sortedList.add(array[right++]);
        }

        while(left<middle) sortedList.add(array[left++]);
        while(right<end) sortedList.add(array[right++]);

        // copy the sorted list to the main array

        for(int i=0;i<sortedList.size();i++)
            array[start+i]=sortedList.get(i);
    }

    /*
    // very bad memory handling
    public static int[] mergeSort(int[] array) {
        if(array.length<=1) return array;

        int midIdx=array.length/2;
        int[] leftHalf= Arrays.copyOfRange(array, 0, midIdx);
        int[] rightHalf=Arrays.copyOfRange(array, midIdx, array.length);
        return mergeTwoSortedArray(mergeSort(leftHalf), mergeSort(rightHalf));

    }

    public static int[] mergeTwoSortedArray(int[] leftHalf, int[] rightHalf){
        int[] sortedArray = new int[leftHalf.length+rightHalf.length];
        int i=0, j=0, k=0;

        while(i<leftHalf.length && j<rightHalf.length){
            if(leftHalf[i]<=rightHalf[j])
                sortedArray[k++]=leftHalf[i++];
            else
                sortedArray[k++]=rightHalf[j++];
        }

        while(i<leftHalf.length ){
            sortedArray[k++]=leftHalf[i++];
        }

        while(j<rightHalf.length ){
            sortedArray[k++]=rightHalf[j++];
        }

        return sortedArray;
    }*/
}
