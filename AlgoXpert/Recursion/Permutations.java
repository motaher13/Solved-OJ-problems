package AlgoExp.Recursion;

import java.util.ArrayList;
import java.util.List;

public class Permutations {
    public static List<List<Integer>> getPermutations(List<Integer> array) {
        List<List<Integer>> out=new ArrayList<>();
        doPermutations(out, array, 0);
        return out;
    }

    public static void doPermutations(List<List<Integer>> out, List<Integer> array, int pos) {
        if(pos==array.size()-1){
            List<Integer> newArray=new ArrayList<>();
            for(int i:array) newArray.add(i);
            out.add(newArray);
        }

        for(int j=pos;j<array.size();j++){
            swap(array,pos, j);
            doPermutations(out, array, pos+1);
            swap(array,j,pos);
        }

    }

    public static void swap(List<Integer> array, int i, int j) {
        int buf=array.get(i);
        array.set(i, array.get(j));
        array.set(j,buf);
    }
}
