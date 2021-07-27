package AlgoExp.Strings;

import java.util.ArrayList;
import java.util.Arrays;
import java.util.List;

public class MinimumCharactersForWords {
    public char[] minimumCharactersForWords(String[] words) {
        int[] maxCount=new int[128];
        int[] curCount=new int[128];
        List<Character> out=new ArrayList<>();
        for(String str:words){
            Arrays.fill(curCount,0);
            for(char c:str.toCharArray()){
                curCount[c]++;
                maxCount[c]=Math.max(maxCount[c],curCount[c]);
            }
        }
        for(int i=0;i<128;i++){
            for(;maxCount[i]>0;maxCount[i]--)
                out.add((char)i);
        }

        char[] outAr=new char[out.size()];
        for(int i=0;i<out.size();i++)
            outAr[i]=out.get(i);
        return outAr;
    }
}
