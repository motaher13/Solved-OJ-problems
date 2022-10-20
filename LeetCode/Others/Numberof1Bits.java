package LeetCode.Others;

public class Numberof1Bits {

    public int hammingWeight(int n) {
        String s=Integer.toBinaryString(n);
        int count=0;
        for(int i=0;i<s.length();i++)
            if(s.charAt(i)=='1')
                count++;
        return count;
    }

    public int anotherEasy(int n) {
        int k=1;
        int count=0;
        for(int i=0;i<32;i++){
            if((n&k)!=0)count++;
            k=k<<1;
        }
        return count;
    }

    public int best(int n) {
        //www.hackerearth.com/practice/basic-programming/bit-manipulation/basics-of-bit-manipulation/tutorial/
        int count=0;
        while( n>0 ) {
            n = n&(n-1);
            count++;
        }
        return count;
    }

    public static void main(String[] args){
        int k=(new Numberof1Bits()).best(8);
        System.out.println(k);
    }
}
