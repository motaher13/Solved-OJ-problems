package AlgoExp.Searching;

public class FindThreeLargestNumber {
    public static int[] findThreeLargestNumbers(int[] array) {
        int[] out={Integer.MIN_VALUE, Integer.MIN_VALUE, Integer.MIN_VALUE};
        for(int num:array){
            if(num>out[2]) update(out, num, 2);
            else if(num>out[1]) update(out, num, 1);
            else if(num>out[0]) update(out, num, 0);
        }

        return out;
    }

    public static void update(int[] array, int num, int idx){
        for(int i=0;i<3;i++){
            if(i==idx){
                array[i]=num;
                return;
            }
            else array[i]=array[i+1];
        }
    }
}
