package LeetCode.SortingandSearching;

import jdk.internal.util.xml.impl.Pair;
import java.util.ArrayList;
import java.util.HashMap;
import java.util.List;

public class SortIntegersbyThePowerValue {

    /*HashMap<Integer,Integer> map=new HashMap<>();
    public int getKth(int lo, int hi, int k) {
        ArrayList<Pair<Integer,Integer>> list=new ArrayList<>();
        for(int i=lo;i<=hi;i++){
            list.add(new Pair(i,generateMap(i)));
        }
    }

    private int generateMap(int n){
        if(map.containsKey(n)) return map.get(n);
        if(n==1) return 1;
        int k=0;
        if(n%2==0) k=generateMap(n/2);
        else k=generateMap(3*k+1);
        map.put(n,k);
        return k+1;
    }*/

    public static void main(String[] args) {
        /*int k=(new SortIntegersbyThePowerValue()).getKth(7,11,4);
        System.out.println(k);*/
    }
}
