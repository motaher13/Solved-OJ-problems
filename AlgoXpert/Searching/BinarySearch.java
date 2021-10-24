package AlgoExp.Searching;

public class BinarySearch {
    public static int binarySearch(int[] array, int target) {
        int start=0, end=array.length-1;
        while(start<=end){
            int mid=(start+end)/2;
            if(array[mid]==target) return mid;
            else if(target>array[mid]) start=mid+1;
            else end=mid-1;
        }
        return -1;
    }
}
