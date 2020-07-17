package LeetCode.Math;

import java.util.HashMap;

public class RomantoInteger {

    public int romanToInt(String s) {
        if(s==null || s.trim().length()==0) return 0;
        s=s.trim();
        HashMap<Character,Integer> map=new HashMap<>();
        map.put('I',1);map.put('V',5);map.put('X',10);map.put('L',50);
        map.put('C',100);map.put('D',500);map.put('M',1000);

        int sum=0;
        for (int i=0;i<s.length();){
            int a=map.get(s.charAt(i));
            int b=0;
            if(i<s.length()-1)
                b=map.get(s.charAt(i+1));
            if(a<b) {
                sum = sum + b - a;
                i++;
            }
            else sum+=a;
            i++;
        }

        return sum;
    }

    public static void main(String[] args){
        String s="I";
        int k=(new RomantoInteger()).romanToInt(s);
        System.out.println(k);
    }
}
