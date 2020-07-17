package LeetCode.String;

import LeetCode.Array.TwoSum;

public class ReverseString {

    public void reverseString(char[] s) {
        int l=s.length;
        int m=l/2;
        for(int i=0;i<m;i++){
            char d=s[i];
            s[i]=s[l-i-1];
            s[l-i-1]=d;
        }
    }


    public static void main(String[] args){
        char[] array={'a','b','c','d','e'};
        (new ReverseString()).reverseString(array);
        for(int i=0;i<array.length;i++)
            System.out.print(array[i] + " ");
    }
}
