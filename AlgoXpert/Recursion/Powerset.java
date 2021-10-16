package AlgoExp.Recursion;

import java.util.ArrayList;
import java.util.List;

public class Powerset {
    public static List<List<Integer>> powerset(List<Integer> array) {
        List<List<Integer>> out =new ArrayList<>();
        generatePowerset(array, out, new ArrayList<>(), 0);
        return out;
    }

    public static void generatePowerset(List<Integer> array,
                                        List<List<Integer>> out,
                                        List<Integer> processing, int pos) {

        if(pos>=array.size()){
            out.add(new ArrayList(processing));
            return;
        }

        generatePowerset(array, out, processing, pos+1);
        processing.add(array.get(pos));
        generatePowerset(array, out, processing, pos+1);
        processing.remove(processing.size()-1);
    }
}
