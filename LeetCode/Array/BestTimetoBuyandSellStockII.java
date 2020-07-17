package LeetCode.Array;

public class BestTimetoBuyandSellStockII {
    public int maxProfit(int[] prices) {
        int sum=0;
        for(int i=0;i<prices.length;i++){
            if(i+1<prices.length && prices[i+1]>prices[i])
                sum=sum+prices[i+1]-prices[i];
        }
        return sum;
    }

    public static void main(String[] args){
        int[] array={7,6,4,3,1};
        int output=(new BestTimetoBuyandSellStockII()).maxProfit(array);
        System.out.println(output);
    }
}
