package LeetCode.Math;

public class SqrtX {
    public int mySqrt(int x) {
        if(x==0 || x==1) return x;
        long mid,low=0,high=x;

        while (low<=high){
            mid=(low+high)/2;
            if(mid*mid<=x && (mid+1)*(mid+1)>x) return (int)mid;
            else if(mid*mid<x) low=mid+1;
            else high=mid-1;
        }
        return 0;
    }


    public static void main(String[] args){
        System.out.println((new SqrtX()).mySqrt(2147395599));
    }
}