package LeetCode.SortingandSearching;

import java.util.Arrays;
import java.util.PriorityQueue;

public class KthLargestElementinanArray {

    public int findKthLargest(int[] nums, int k) {
        Arrays.sort(nums);
        return nums[nums.length-k];
    }

    public static void main(String[] args) {
        int[] ara={3,2,3,1,2,4,5,5,6};
        int out=(new KthLargestElementinanArray()).findKthLargest(ara,4);
        System.out.print(out);
    }
}
