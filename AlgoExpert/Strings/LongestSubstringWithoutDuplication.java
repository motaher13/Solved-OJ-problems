package AlgoExp.Strings;

import java.util.HashMap;
import java.util.Map;

public class LongestSubstringWithoutDuplication {
    public static String longestSubstringWithoutDuplication(String str) {
        Map<Character, Integer> map=new HashMap<>();
        int start=0, end=1;
        for(int i=0,k=0;i<=str.length();i++){
            char c=i<str.length()? str.charAt(i):'c';
            if(i==str.length() || (map.containsKey(c) && map.get(c)>=k)){
                if((end-start)<=(i-k)){
                    start=k;
                    end=i;
                }
                if(i<str.length())
                    k=map.get(c)+1;
            }
            map.put(c,i);
        }
        return str.substring(start, end);
    }
}
