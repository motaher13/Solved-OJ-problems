package LeetCode.SortingandSearching;

public class MedianofTwoSortedArrays {

    public double findMedianSortedArrays(int[] xNum, int[] yNum) {

        /* https://www.youtube.com/watch?v=LPFhl65R7ww */
        if(xNum.length>yNum.length) return findMedianSortedArrays(yNum,xNum);

        int x=xNum.length;
        int y=yNum.length;

        int low=0;
        int high=x;

        while (low<=high){
            int partitionX= (low+high)/2;
            int partitionY= (x+y+1)/2 - partitionX; // add 1 to balance odd,even

            int maxLeftX = (partitionX==0)? Integer.MIN_VALUE : xNum[partitionX-1];
            int minRightX = (partitionX==x)? Integer.MAX_VALUE : xNum[partitionX];

            int maxLeftY = (partitionY==0)? Integer.MIN_VALUE : yNum[partitionY-1];
            int minRightY = (partitionY==y)? Integer.MAX_VALUE : yNum[partitionY];

            if(maxLeftX<=minRightY && maxLeftY<=minRightX){
                if((x+y)%2==0)
                    return ((double) Math.max(maxLeftX,maxLeftY)+Math.min(minRightX,minRightY))/2;
                else
                    return (double) Math.max(maxLeftX,maxLeftY);
            }else if(maxLeftX>minRightY){
                high=partitionX-1;
            }else {
                low=partitionX+1;
            }
        }

        return 0;
    }





    public static void main(String[] args) {
        int[] a={1};
        int[] b={1};

        System.out.println((new MedianofTwoSortedArrays()).findMedianSortedArrays(a,b));
    }
}
