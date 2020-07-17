package LeetCode.Backtracking;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.HashMap;
import java.util.List;

public class LetterCombinationsofaPhoneNumber {

    public List<String> letterCombinations(String digits) {

        List<String> out=new ArrayList<>();
        if(digits==null || digits.length()==0) return out;
        HashMap<Character,List<String>> map=buildMap();

        out=new ArrayList<>(map.get(digits.charAt(0)));

        for(int i=1;i<digits.length();i++){
            List<String> charList=map.get(digits.charAt(i));
            int l=out.size();
            for(int j=0;j<charList.size();j++){

                for(int k=0;k<l;k++){
                    if(j==charList.size()-1){
                        out.set(k,out.get(k)+charList.get(j));
                    }
                    else {
                        out.add(out.get(k)+charList.get(j));
                    }
                }
            }
        }

        return out;
    }

    private HashMap<Character,List<String>> buildMap(){
        HashMap<Character,List<String>> map=new HashMap<>();
        map.put('1',new ArrayList<>());
        map.put('2',new ArrayList<>(Arrays.asList("a","b","c")));
        map.put('3',new ArrayList<>(Arrays.asList("d","e","f")));
        map.put('4',new ArrayList<>(Arrays.asList("g","h","i")));
        map.put('5',new ArrayList<>(Arrays.asList("j","k","l")));
        map.put('6',new ArrayList<>(Arrays.asList("m","n","o")));
        map.put('7',new ArrayList<>(Arrays.asList("p","q","r","s")));
        map.put('8',new ArrayList<>(Arrays.asList("t","u","v")));
        map.put('9',new ArrayList<>(Arrays.asList("w","x","y","z")));
        return map;
    }

    public static void main(String[] args) {
        List<String> k=(new LetterCombinationsofaPhoneNumber()).letterCombinations("8");
        for(String f:k) System.out.println(f);
    }
}


