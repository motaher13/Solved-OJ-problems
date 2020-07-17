package LeetCode.Math;

public class FactorialTrailingZeroes {
    public int trailingZeroes(int n) {
        int count=0;
        for(int i=5;n/i>0;i*=5){
            count+=(n/i);
        }
        return count;

        //leetcode has wrong input set
        /*int count=0;
        for(int i=5;n/i>0;){
            count+=(n/i);
            n=n/i;
        }
        return count;*/
    }
    public static void main(String[] args) {
        int i=1808548329;
        int k=(new FactorialTrailingZeroes()).trailingZeroes(i);
        System.out.println(k);

    }
}
