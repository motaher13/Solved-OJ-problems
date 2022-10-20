package LeetCode.Others;

public class HammingDistance {

    public int best(int x, int y) {
        int diff=x^y;
        int count=0;
        while(diff>0){
            diff=diff&(diff-1); //removing last 1 bit
            count++;
        }
        return count;
    }
    
    public int builtIn(int x, int y) {
        return Integer.bitCount(x^y);
    }
    
    
    public int hammingDistance(int x, int y) {
        int count=0;
        for(int i=0;i<31;i++){
            int k=1<<i;
            if((x&k)!=(y&k)) count++;
        }
        return count;
    }

    // public int hammingDistance(int x, int y) {
    //     String a=Integer.toBinaryString(x);
    //     String b=Integer.toBinaryString(y);
    //     int first=a.length()-1, second=b.length()-1;
    //     int count=0;
    //     while (first>=0 || second>=0){
    //         char i= first<0? '0':a.charAt(first);
    //         char j= second<0? '0':b.charAt(second);
    //         first--;second--;
    //         if(i!=j) count++;
    //     }

    //     return count;
    // }

    

    public static void main(String[] args){
        int k=(new HammingDistance()).hammingDistance(0,1);
        System.out.println(k);
    }
}
