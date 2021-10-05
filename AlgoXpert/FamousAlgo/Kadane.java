package AlgoExp.FamousAlgo;

public class Kadane {

    public static int kadanesAlgorithm(int[] array) {
        if(array.length==0) return 0;
        int max=array[0];
        int sum=array[0];
        for(int i=1;i<array.length;i++){
            sum=Math.max(sum+array[i], array[i]);
            max=Math.max(max, sum);
        }
        return max;
    }
}
