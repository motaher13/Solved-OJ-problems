package AlgoExp.Strings;

import java.util.*;

public class GroupAnagrams {
    public static List<List<String>> groupAnagrams(List<String> words) {
        Map<String, List<String>> map=new HashMap<>();

        int[] count=new int[26];
        for(String str:words){
            Arrays.fill(count,0);
            for(char c:str.toCharArray()) count[c-'a']++;
            StringBuffer buf=new StringBuffer();
            for(int i:count) buf.append("#").append(i);
            String key=buf.toString();
            if(!map.containsKey(key)) map.put(key, new ArrayList<>());
            map.get(key).add(str);
        }

        return new ArrayList<>(map.values());
    }
}
