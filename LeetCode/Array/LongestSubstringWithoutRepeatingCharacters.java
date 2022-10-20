package LeetCode.Array;

import java.util.HashMap;

public class LongestSubstringWithoutRepeatingCharacters {

    public int lengthOfLongestSubstring(String s) {
        Map<Character, Integer> map=new HashMap();
        int i=0, j=0;
        int mx=Integer.MIN_VALUE;

        while(j<s.length()){
            char c=s.charAt(j);
            if(map.containsKey(c))
                i=Math.max(i,map.get(c)+1);
            
            map.put(c,j);
            mx=Math.max(mx, j-i+1);
            j++;
        }

        return mx==Integer.MIN_VALUE? 0:mx;
    }

    public static void main(String[] args) {
        String s="abbacde";
        int k=(new LongestSubstringWithoutRepeatingCharacters()).best(s);
        System.out.println(k);
    }
}
