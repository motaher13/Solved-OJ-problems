package LeetCode.SortingandSearching;

import java.util.Arrays;
import java.util.PriorityQueue;

public class KthLargestElementinanArray {

    // quickSort
    // perform quicksort untill kth element is fixed
    public int findKthLargestBest(int[] nums, int k) {
        int targetIndex=nums.length-k; // arr.length=6? 2nd largest index = 6-2 = 4
        return doQuick(nums,0, nums.length-1, targetIndex);
    }

    private int doQuick(int[] arr, int low, int high, int targetIndex){
        if(low<high){
            int pvtIndex=partition(arr,low,high);
            if(pvtIndex==targetIndex) return arr[pvtIndex];
            else if(pvtIndex<targetIndex) return doQuick(arr, pvtIndex+1, high,targetIndex);
            else return doQuick(arr,low,pvtIndex-1, targetIndex);
        }
        
        if(low==high) return arr[low];
        return arr[0];
    }

    private int partition(int[] arr, int low, int high){
        // simulate with a dummy array, will be clear
        int pvt=arr[high];
        int i=low;
        for (int j=low;j<high;j++){
            if(arr[j]<pvt){
                swap(arr,i,j);
                i++;
            }
        }
        swap(arr,i,high);
        return i;
    }

    private void swap(int[] arr, int i, int j){
        int tmp=arr[i];
        arr[i]=arr[j];
        arr[j]=tmp;
    }


    // priority que
    public int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> q=new PriorityQueue();
        for(int n:nums){
            q.add(n);
            if(q.size()>k)
                q.poll();
        }
        return q.poll();
    }

    public static void main(String[] args) {
        int[] ara={3,2,3,1,2,4,5,5,6};
        int out=(new KthLargestElementinanArray()).findKthLargest(ara,4);
        System.out.print(out);
    }
}
