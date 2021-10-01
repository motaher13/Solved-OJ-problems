package AlgoExp.Greedy;

import java.util.*;

public class TaskAssignment {

    public ArrayList<ArrayList<Integer>> taskAssignment(int k, ArrayList<Integer> tasks) {

        List<List<Integer>> data= new ArrayList<>();
        ArrayList<ArrayList<Integer>> out = new ArrayList<>();

        for(int i=0;i<tasks.size();i++)
            data.add(new ArrayList<>(Arrays.asList(i, tasks.get(i))));

        Collections.sort(data, Comparator.comparing(a->a.get(1)));

        for(int i=0;i<k;i++)
            out.add(new ArrayList<>(Arrays.asList(data.get(i).get(0),data.get(2*k-i-1).get(0))));

        return out;

    }
}
