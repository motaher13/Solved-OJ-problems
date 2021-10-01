package AlgoExp.Greedy;

import java.util.Arrays;

public class MinimumWaitingTime {

    public int minimumWaitingTime(int[] queries) {
        Arrays.sort(queries);
        int sum=0;
        for(int i=0;i<queries.length-1;i++)
            sum+=(queries[i]*(queries.length-i-1));
        return sum;
    }
}
