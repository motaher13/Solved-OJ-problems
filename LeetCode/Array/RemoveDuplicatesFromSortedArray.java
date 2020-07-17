package LeetCode.Array;

public class RemoveDuplicatesFromSortedArray {

    public int removeDuplicates(int[] nums) {

        int pointer=1,runner=1;

        outerLoop:
        while (pointer<nums.length && runner<nums.length)
        {
            while(nums[runner]==nums[runner-1]) {
                runner++;
                if(runner==nums.length)
                    break outerLoop;
            }
            if(runner!=pointer){
                nums[pointer]=nums[runner];
            }
            runner++;
            pointer++;
        }
        return pointer;

        //best
//        if (nums.length == 0) return 0;
//        int i = 0;
//        for (int j = 1; j < nums.length; j++) {
//            if (nums[j] != nums[i]) {
//                i++;
//                nums[i] = nums[j];
//            }
//        }
//        return i + 1;
    }

    public static void main(String[] args){
        int[] array={0,0,1,1,1,2,2,3,3,4};
        int output=(new RemoveDuplicatesFromSortedArray()).removeDuplicates(array);
        for(int i=0;i<output;i++)
            System.out.println(array[i]);
    }

}
