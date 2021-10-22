package AlgoExp.Strings;

import java.util.HashMap;
import java.util.Map;

public class SmallestSubstringContaining {
    public static String smallestSubstringContaining(String bigString, String smallString) {
        /* use two pointer, right and left, place them at the start of bigString, move right
        forward untill getting all necessary chars, then move left pointer forward and check
        if this optimises the size of actual length, if yes, update the index, if not, move
        the right one forward and find next best one.
         */
        Map<Character, Integer> smallMap=new HashMap<>();
        Map<Character, Integer> runningMap=new HashMap<>();
        for(char c:smallString.toCharArray()) smallMap.put(c,smallMap.getOrDefault(c, 0)+1);

        int s=0,e=0,mnLen=Integer.MAX_VALUE;
        int smallSize=smallString.length();

        int left=0, right=0, effectiveLen=0;
        while(right<bigString.length()){

            while(right<bigString.length() && effectiveLen<smallSize){
                char c=bigString.charAt(right);
                if(smallMap.containsKey(c)){
                    runningMap.put(c, runningMap.getOrDefault(c,0)+1);
                    if(runningMap.getOrDefault(c, 0)<=smallMap.get(c))
                        effectiveLen++;
                }

                right++;
            }


            while(left<right && effectiveLen==smallSize){
                int actualLen=right-left;
                if(actualLen<mnLen){
                    mnLen=actualLen;
                    s=left;
                    e=right;
                }

                char c=bigString.charAt(left);
                if(smallMap.containsKey(c)){
                    runningMap.put(c, runningMap.get(c)-1);

                    if(runningMap.get(c)<smallMap.get(c)){
                        effectiveLen--;
                    }
                }
                left++;
            }

        }

        return bigString.substring(s,e);

    }


    public static void main(String[] args){
        System.out.println(smallestSubstringContaining("abcd$ef$axb$c$","$$abf"));
    }
}
