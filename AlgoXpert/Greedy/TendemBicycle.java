package AlgoExp.Greedy;

import java.util.Arrays;

public class TendemBicycle {

    public int tandemBicycle(int[] redShirtSpeeds, int[] blueShirtSpeeds, boolean fastest) {
        Arrays.sort(redShirtSpeeds);
        if(fastest)
            blueShirtSpeeds=descendingArray(blueShirtSpeeds);
        else
            Arrays.sort(blueShirtSpeeds);

        int sum=0;
        for(int i=0;i<redShirtSpeeds.length;i++)
            sum+=Math.max(blueShirtSpeeds[i], redShirtSpeeds[i]);

        return sum;
    }

    private static int[] descendingArray(int[] array) {
        Arrays.sort(array);
        int[] descArray = new int[array.length];
        for(int i=0; i<array.length; i++) {
            descArray[i] = array[(array.length-1)-i];
        }
        return descArray;
    }
}
