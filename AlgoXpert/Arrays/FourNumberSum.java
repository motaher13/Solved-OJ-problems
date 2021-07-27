
import java.util.*;
/*OM13*/

class FourNumberSum {
  /*
    * take a pivot from position 1 to forward, make right pair with it and any one from right
    * of it, if their is a counter in right map, insert into out,
    * other wise, make pair with it each one from left and insert the sum into map
    * */

    public static List<Integer[]> fourNumberSum(int[] array, int targetSum) {
        Map<Integer, List<Integer[]>> leftPairSumMap=new HashMap<>();
        List<Integer[]> out=new ArrayList<>();
        for(int pivot=1;pivot<array.length;pivot++){

            /* calculate right pair*/
            for(int j=pivot+1;j<array.length;j++){
                int rightSum=array[pivot]+array[j];
                int diff=targetSum-rightSum;
                if(leftPairSumMap.containsKey(diff)){
                    for(Integer[] leftPair:leftPairSumMap.get(diff)){
                        out.add(new Integer[]{leftPair[0],leftPair[1],array[pivot], array[j]});
                    }
                }
            }

            /* store left pair*/
            for(int i=0;i<pivot;i++){
                int leftSum=array[i]+array[pivot];
                Integer[] leftPair={array[i], array[pivot]};
                if (!leftPairSumMap.containsKey(leftSum)){
                    List<Integer[]> sumArray=new ArrayList<>();
                    sumArray.add(leftPair);
                    leftPairSumMap.put(leftSum,sumArray);
                }else {
                    leftPairSumMap.get(leftSum).add(leftPair);
                }
            }
        }
        return out;
    }
}
