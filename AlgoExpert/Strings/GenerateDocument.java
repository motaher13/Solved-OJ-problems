package AlgoExp.Strings;

import java.util.HashMap;
import java.util.Map;

public class GenerateDocument {
    public boolean generateDocument(String characters, String document) {
        Map<Character, Integer> map=new HashMap<>();
        characters.chars().forEach(c->{
            map.put((char)c,map.getOrDefault((char)c,0)+1);
        });


        for(int i=0;i<document.length();i++){
            char c=document.charAt(i);
            Integer count=map.get(c);
            if(count==null || count==0)
                return false;
            map.put(c, count-1);
        }
        return true;
    }
}
