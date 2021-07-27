package AlgoExp.Strings;

import java.util.HashMap;
import java.util.Map;

public class FirstNonRepeatingCharacter {
    public int firstNonRepeatingCharacter(String string) {
        Map<Character, Integer> map=new HashMap<>();
        string.chars().forEach(c->{
            map.put((char)c, map.getOrDefault((char)c, 0)+1);
        });

        for(int i=0;i<string.length();i++)
            if(map.get(string.charAt(i))==1)
                return i;
        return -1;
    }
}
