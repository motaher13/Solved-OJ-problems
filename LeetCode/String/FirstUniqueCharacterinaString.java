package LeetCode.String;

import com.sun.xml.internal.ws.util.StringUtils;

import java.util.HashMap;

public class FirstUniqueCharacterinaString {

    public int firstUniqChar(String s) {
        if(s==null || s.length()==0)
            return -1;
        int l=s.length();
        HashMap<Character,Integer> map=new HashMap<>();
        for(int i=0;i<l;i++){
            char c=s.charAt(i);
            map.put(c,map.getOrDefault(c,0)+1);
        }
        for(int i=0;i<l;i++){
            if(map.get(s.charAt(i))==1)
                return i;
        }
        return -1;
    }


    public int best(String s) {
        int res = s.length();

        for (char c = 'a'; c <='z'; c++) {
            int index = s.indexOf(c);
            if (index != -1 && index == s.lastIndexOf(c)) {
                res = Math.min(res, index);
            }
        }


        return res == s.length() ? -1 : res;

    }

    public static void main(String[] args){
        String s="loveleetcode";
        int i=(new FirstUniqueCharacterinaString()).firstUniqChar(s);
        System.out.println(i);
    }
}
