package LeetCode.Array;

import java.util.HashMap;

public class LongestSubstringWithoutRepeatingCharacters {

    public int lengthOfLongestSubstring(String s) {
        if(s==null) return 0;
        if(s.length()==0) return 0;
        if(s.length()==1) return 1;

        HashMap<Character,Integer> map=new HashMap<>();

        int mx=0;
        int count=0;

        for(int i=0,j=0;i<s.length();i++){
            int p=map.getOrDefault(s.charAt(i),-1);
            if(p==-1 || p<j){
                count++;
                mx=Math.max(count,mx);
                map.put(s.charAt(i),i);
            }else{
                count=i-p;
                j=p+1;
                map.put(s.charAt(i),i);
            }
        }
        return mx;
    }

    public int best(String s) {
        if (s == null) {
            throw new NullPointerException();
        }
        char[] arr = s.toCharArray();
        int i = 0, j = 0, maxLength = 0;
        int startIndex = 0;
        for (i = 0; i < arr.length; i++) {
            for (j = startIndex; j < i; j++) {
                if(arr[j]==arr[i]){
                    maxLength=Math.max(maxLength,i-startIndex);
                    startIndex=j+1;
                    break;
                }
            }
        }
        maxLength=Math.max(maxLength,i-startIndex);
        return maxLength;
    }

    public static void main(String[] args) {
        String s="abbacde";
        int k=(new LongestSubstringWithoutRepeatingCharacters()).best(s);
        System.out.println(k);
    }
}
