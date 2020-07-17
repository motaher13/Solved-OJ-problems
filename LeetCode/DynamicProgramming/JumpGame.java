package LeetCode.DynamicProgramming;

public class JumpGame {

    public boolean canJumpTopDown(int[] nums) {
        if(nums==null) return false;
        if(nums.length==0) return true;
        boolean[] check=new boolean[nums.length];
        return checkCanJump(nums,check,0);
    }

    // top down // it would be better to use bottom up here
    private boolean checkCanJump(int[] nums,boolean[] check, int pos){
        if(pos==nums.length-1) return true;
        if(check[pos]) return false;
        check[pos]=false;

        for(int i=Math.min(nums.length-1-pos,nums[pos]);i>0;i--){
            if(checkCanJump(nums,check,pos+i)){
                return true;
            }
        }
        return false;
    }



    // bottom up with optimization turned to greedy
    // https://leetcode.com/articles/jump-game/

    public boolean canJumpBottomUp(int[] nums){
        if(nums== null) return false;
        int letMostPost=nums.length-1;
        for (int i=nums.length-2;i>=0;i--){
            if(nums[i]>=(letMostPost-i)) letMostPost=i;
        }
        return letMostPost==0;
    }

    public static void main(String[] args) {
        int[] arr={3,2,1,0,4};
        boolean k= (new JumpGame()).canJumpBottomUp(arr);
        System.out.println(k);
    }
}
