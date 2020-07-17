package LeetCode.DynamicProgramming;

public class BestTimetoBuyandSellStock {

    public int maxProfit(int[] prices) {
        int profit=0;
        int min=2147483647;
        for(int i=0;i<prices.length;i++){
            if(prices[i]<min) min=prices[i];
            else if((prices[i]-min)>profit) profit=prices[i]-min;
        }
        return profit;
    }

    public static void main(String[] args){
//        int[] a={7,3,8,2,7,15,50,5,100};
        int[] a={7,1,5,3,6,4};
        int k=(new BestTimetoBuyandSellStock()).maxProfit(a);
        System.out.println(k);
    }
}
