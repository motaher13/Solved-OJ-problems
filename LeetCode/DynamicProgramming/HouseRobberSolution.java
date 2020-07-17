package LeetCode.DynamicProgramming;

public class HouseRobberSolution {

    public int rob(int[] nums) {
        if(nums==null || nums.length==0) return 0;

        int first=0,second=0;
        for(int i=0;i<nums.length;i++){
            int c =Math.max(first+nums[i],second);
            first=second;
            second=c;
        }
        return second;

    }

    public static void main(String[] args){
        int[] a={2,7,9,3,1};
        int k=(new HouseRobberSolution()).rob(a);
        System.out.println(k);
    }
}
