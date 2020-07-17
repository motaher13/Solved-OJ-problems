package LeetCode.Array;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class FourSumII {

    public int fourSumCount(int[] A, int[] B, int[] C, int[] D) {
        if(A.length==0) return 0;
        HashMap<Integer,Integer> map=new HashMap<>();
        int count=0;

        for(int i=0;i<A.length;i++)
            for (int j=0;j<B.length;j++)
                map.put(A[i]+B[j],map.getOrDefault(A[i]+B[j],0)+1);

        for(int i=0;i<C.length;i++)
            for (int j=0;j<D.length;j++){
                int k=C[i]+D[j];
                int l=map.getOrDefault(0-k,0);
                count+=l;
            }

        return count;
    }

    public static void main(String[] args) {
        int[] A = { 1, 2};
        int[] B = {-2,-1};
        int[] C = {-1, 2};
        int[] D = { 0, 2};

        System.out.println((new FourSumII()).fourSumCount(A,B,C,D));
    }
}
