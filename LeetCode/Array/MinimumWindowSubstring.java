package LeetCode.Array;

import java.util.HashMap;

public class MinimumWindowSubstring {

    public String minWindow(String s, String t) {
        StringBuilder strB=new StringBuilder();
        HashMap<Character,Integer> map=new HashMap<>();
        for(int i=0;i<t.length();i++) map.put(t.charAt(i),-1);

        boolean put=false;
        int count=0;
        int low=0;
        Character c;
        for(int i=0;i<s.length();i++){
            c=s.charAt(i);
            if(map.get(c)!=null){
            }
        }
        return null;
    }

    public static void main(String[] args) {
        System.out.println((new MinimumWindowSubstring()).minWindow("ADOBECODEBANC","ABC"));
    }
}
