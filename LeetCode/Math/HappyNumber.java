package LeetCode.Math;

public class HappyNumber {

    public boolean isHappy(int n) {
        while (true){
            int squareSum=0;
            while (n>0){
                int rightDigit=n%10;
                squareSum+=(rightDigit*rightDigit);
                n/=10;
            }
            if(squareSum==1 || squareSum==7) return true;
            if(squareSum<10) return false;
            n=squareSum;
        }
    }

    public static void main(String[] args) {
        boolean k=(new HappyNumber()).isHappy(1111111);
        System.out.println(k);
    }
}
