package LeetCode.Others;

public class ReverseBits {

    public int reverseBits(int n) {
        for(int i=0;i<16;i++){
            int j=31-i;
            int a=n&(1<<i); //bit at ith pos
            int b=n&(1<<j);
            if((a!=0 && b!=0) || (a==b))
                continue;
            else{
                n^=1<<i; // flip bit at ith pos
                n^=1<<j;
            }
        }
        return n;
    }
}
