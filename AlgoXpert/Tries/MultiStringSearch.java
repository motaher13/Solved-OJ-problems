package AlgoExp.Tries;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;
import java.util.Map;

public class MultiStringSearch {
    public static List<Boolean> multiStringSearch(String bigString, String[] smallStrings) {
        // Write your code here.
        List<Boolean> out= new ArrayList<>();
        Map<Character, HashMap> root=new HashMap<>();

        for(int i=0;i<bigString.length();i++){
            Map<Character, HashMap> current= root;
            for(int j=i;j<bigString.length();j++){
                char c=bigString.charAt(j);
                if(current.containsKey(c))
                    current=(Map<Character, HashMap>)current.get(c);
                else{
                    current.put(c, new HashMap<>());
                    current=(Map<Character, HashMap>)current.get(c);
                }
            }
        }

        for(String str:smallStrings){
            Map<Character, HashMap> current= root;
            int i=0;
            for(;i<str.length();i++){
                char c=str.charAt(i);
                if(current.containsKey(c))
                    current=(Map<Character, HashMap>)current.get(c);
                else
                    break;
            }
            out.add(i==str.length());
        }

        return out;
    }
}
