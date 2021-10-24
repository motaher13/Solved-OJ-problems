package AlgoExp.Searching;

public class ShiftedBinarySearch {
    public static int shiftedBinarySearch(int[] array, int target) {
        // Write your code here.
        // 3,4,5,6-,7,0,1,2 // 1
        // 8,0,1,2-,3,4,6,7
        int start=0, end=array.length-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(array[mid]==target) return mid;
            if(array[mid]>=array[start]){
                if(target>=array[start] && target<array[mid])
                    end=mid-1;
                else
                    start=mid+1;
            }else{
                if(target>array[mid] && target<=array[end])
                    start=mid+1;
                else
                    end=mid-1;
            }

        }
        return -1;
    }
}
