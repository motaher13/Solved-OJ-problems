package AlgoExp.DP;

public class MaxSubsetSumNoAdjacent {
    public static int maxSubsetSumNoAdjacent(int[] array) {
        int p=0, pp=0, sum=0;
        for(int i=0;i<array.length;i++){
            sum=array[i]+pp;
            pp=Math.max(p,pp);
            p=sum;
        }
        return Math.max(p,pp);
    }
}
