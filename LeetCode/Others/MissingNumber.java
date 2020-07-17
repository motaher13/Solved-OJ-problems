package LeetCode.Others;

public class MissingNumber {

    public int missingNumber(int[] nums) {
        int n=nums.length;
        int f=n*(n+1)/2;
        int sum=0;
        for(int i=0;i<nums.length;i++)
            sum+=nums[i];
        return f-sum;
    }

    public static void main(String[] args){
        int[] a={1,2,0};

        int k=(new MissingNumber()).missingNumber(a);
        System.out.println(k);

    }
}
