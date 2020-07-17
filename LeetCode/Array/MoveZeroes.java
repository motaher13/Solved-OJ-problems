package LeetCode.Array;

public class MoveZeroes {

    public void moveZeroes(int[] nums) {
        int countZero=0;
        int i=0,j=0;
        for(;j<nums.length;j++){
            if(nums[j]==0)
                countZero++;
            else{
                int c=nums[i];
                nums[i]=nums[j];
                nums[j]=c;
                i++;
            }
        }
        for(int k=0;k<countZero;k++,i++)
            nums[i]=0;
    }

    public void best(int[] nums) {
        int left = 0;

        for (int right = 0; right < nums.length; right++) {
            if (nums[right] != 0) {
                if (right > left) {
                    nums[left] = nums[right];
                    nums[right] = 0;
                }

                left++;
            }
        }
    }

    public static void main(String[] args){
        int[] array={0,1,3,12,0};
        (new MoveZeroes()).moveZeroes(array);
        for(int i:array)
            System.out.print(i+" ");
    }
}
