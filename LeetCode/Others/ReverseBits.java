package LeetCode.Others;

public class ReverseBits {

    public static void main(String[] args){
        char[] s={'a','b','c'};
        for(int i=0;i< (1<<s.length);i++){
            for(int j=0;j<s.length;j++){
                if(((1<<j)&i)>0){
                    System.out.print(s[j]);
                }
            }
            System.out.printf("\n");
        }
    }
}
