package AlgoExp.DP;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class KnapsackProblem {
    // 0-1 knapsack with, have to trac the elements also
	/*
	let's imagine a 2d dp array, where x axis is the space in the bag from 0 to capacity
	and y axis is taking items, starting no items to taking among 0 to ith items.
	check youtube for explanation, or check resources for image
	link: https://youtu.be/qsmBmdteMCg
	*/
    public static List<List<Integer>> knapsackProblem(int[][] items, int capacity) {
        // taking 1 extra item to make the first row blank, to denote a empty item, to avoid exception for each i-1 check
        // 0-> value, 1->capacity
        int[][] dp=new int[items.length+1][capacity+1];
        for(int i=1;i<=items.length;i++){
            int curVal=items[i-1][0];
            int curW=items[i-1][1];
            for(int c=0;c<=capacity;c++){
                if(curW>c)
                    dp[i][c]=dp[i-1][c];
                else
                    dp[i][c]=Math.max(dp[i-1][c], dp[i-1][c-curW]+curVal);

            }
        }

        return getItems(dp, items);
    }


    public static List<List<Integer>> getItems(int[][] dp, int[][] items) {
        List<Integer> seq=new ArrayList<>();
        int i=dp.length-1;
        int c=dp[0].length-1;
        while(i>0){
            if(dp[i][c]==dp[i-1][c])
                i--;
            else{
                seq.add(0,i-1);
                c-=items[i-1][1];
                i--;
            }

            if(c==0) break;
        }

        List<List<Integer>> out=new ArrayList<>();
        out.add(new ArrayList<>(Arrays.asList(dp[dp.length-1][dp[0].length-1]))); // bottom right element
        out.add(seq);
        return out;
    }
}
