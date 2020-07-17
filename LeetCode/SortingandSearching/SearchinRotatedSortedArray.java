package LeetCode.SortingandSearching;

public class SearchinRotatedSortedArray {

        public int search(int[] nums, int target) {
            return doSearch(nums,0,nums.length-1,target);
        }

        private int doSearch(int[] nums,int low,int high,int target){
            if(high<low) return -1;
            int mid=(low+high)/2;
            if(nums[mid]==target) return mid;
            if(nums[mid]>nums[low] || mid==low){
                if(target>=nums[low] && target<nums[mid]) return doSearch(nums,low,mid-1,target);
                else return doSearch(nums,mid+1,high,target);
            }
            if(target>nums[mid] && target<=nums[high]) return doSearch(nums,mid+1,high,target);
            return doSearch(nums,low,mid-1,target);
        }

    public static void main(String[] args) {
        int[] arr={4,3};
        int k=(new SearchinRotatedSortedArray()).search(arr,3);
        System.out.println(k);
    }
}
