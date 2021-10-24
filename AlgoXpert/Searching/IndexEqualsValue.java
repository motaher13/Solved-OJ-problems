package AlgoExp.Searching;

public class IndexEqualsValue {
    public int indexEqualsValue(int[] array) {
        int left=0, right=array.length-1;
        int mn=Integer.MAX_VALUE;
        while(left<=right){
            int mid=(left+right)/2;
            if(array[mid]==mid){
                mn=Math.min(mn, mid);
                right=mid-1;
            }
            else if(array[mid]>mid) right=mid-1;
            else left=mid+1;
        }
        return mn==Integer.MAX_VALUE? -1: mn;
    }
}
