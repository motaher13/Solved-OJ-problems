package LeetCode.Array;

public class IncreasingTripletSubsequence {

    public boolean increasingTriplet(int[] nums) {
        if(nums==null ||nums.length<3) return false;
        int[] a=new int[nums.length];
        int[] b=new int[nums.length];

        int mn=nums[0],mx=nums[nums.length-1];
        for(int i=1,j=nums.length-2;i<nums.length-1;i++,j--){
            a[i]=mn;
            if(nums[i]<mn) mn=nums[i];

            b[j]=mx;
            if(nums[j]>mx) mx=nums[j];
        }

        for(int i=1;i<nums.length-1;i++){
            if(nums[i]>a[i]&& nums[i]<b[i]) return true;
        }
        return false;

    }

    public boolean best(int[] nums){
        int a=Integer.MAX_VALUE,b=Integer.MAX_VALUE;

        for(int i=0;i<nums.length;i++){
            if(nums[i]<=a) a=nums[i];
            else if(nums[i]<=b) b=nums[i];
            else return true;
        }
        return false;
    }

    public static void main(String[] args) {
        int[] ar={5,1,3,5,5,4};
        boolean k=(new IncreasingTripletSubsequence()).best(ar);
        System.out.println(k);
    }
}
