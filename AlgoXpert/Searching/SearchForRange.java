package AlgoExp.Searching;

public class SearchForRange {
    public static int[] searchForRange(int[] array, int target) {
        int[] range= new int[] {-1, -1};
        binarySearch(array, target, 0, array.length-1, range, true);
        binarySearch(array, target, 0, array.length-1, range, false);
        return range;
    }

    public static void binarySearch(
            int[] array, int target, int left,
            int right, int[] range, boolean goLeft) {

        while(left<=right){
            int mid=(left+right)/2;
            if(target<array[mid])
                right=mid-1;
            else if(target>array[mid])
                left=mid+1;
            else{
                if(goLeft){
                    if(mid==0 || array[mid-1]!=target){
                        range[0]=mid;
                        return;
                    }else{
                        right=mid-1;
                    }
                }else{
                    if(mid==array.length-1 || array[mid+1]!=target){
                        range[1]=mid;
                        return;
                    }else{
                        left=mid+1;
                    }
                }
            }
        }
    }
}
