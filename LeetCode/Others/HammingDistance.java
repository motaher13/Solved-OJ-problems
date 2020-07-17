package LeetCode.Others;

public class HammingDistance {

    public int hammingDistance(int x, int y) {
        String a=Integer.toBinaryString(x);
        String b=Integer.toBinaryString(y);
        int first=a.length()-1, second=b.length()-1;
        int count=0;
        while (first>=0 || second>=0){
            char i= first<0? '0':a.charAt(first);
            char j= second<0? '0':b.charAt(second);
            first--;second--;
            if(i!=j) count++;
        }

        return count;
    }

    public static void main(String[] args){
        int k=(new HammingDistance()).hammingDistance(0,1);
        System.out.println(k);
    }
}
