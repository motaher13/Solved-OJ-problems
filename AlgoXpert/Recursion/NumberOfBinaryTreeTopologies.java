package AlgoExp.Recursion;

import java.util.HashMap;
import java.util.Map;

public class NumberOfBinaryTreeTopologies {
    public static int numberOfBinaryTreeTopologies(int n) {
        Map<Integer,Integer> cache= new HashMap<>();
        cache.put(0,1);
        return generateBinaryTreeTopologies(n, cache);
    }

    public static int generateBinaryTreeTopologies(int n, Map<Integer,Integer> cache) {
        if(cache.containsKey(n)) return cache.get(n);

        int sum=0;
        for(int left=0;left<n;left++){
            int right=n-left-1;
            int leftSize=generateBinaryTreeTopologies(left, cache);
            int rightSize=generateBinaryTreeTopologies(right,cache);
            sum+=leftSize*rightSize;
        }
        cache.put(n,sum);
        return sum;

    }
}
