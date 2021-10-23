package AlgoExp.Heaps;

import java.util.ArrayList;
import java.util.List;
import java.util.PriorityQueue;

public class MergeSortedArray {
    public static List<Integer> mergeSortedArrays(List<List<Integer>> arrays) {
        PriorityQueue<Item> pq=new PriorityQueue<>((a, b)->Integer.compare(a.value,b.value));
        List<Integer> out=new ArrayList<>();

        for(int i=0;i<arrays.size();i++)
            pq.add(new Item(arrays.get(i).get(0), i, 0));

        while(!pq.isEmpty()){
            Item cur=pq.poll();
            out.add(cur.value);
            if(cur.idx==arrays.get(cur.arrayIdx).size()-1) continue;
            List<Integer> curArray=arrays.get(cur.arrayIdx);
            pq.add(new Item(curArray.get(cur.idx+1), cur.arrayIdx, cur.idx+1));
        }

        return out;
    }

    static class Item{
        int value;
        int arrayIdx;
        int idx;

        public Item(int value, int arrayIdx, int idx){
            this.value=value;
            this.arrayIdx=arrayIdx;
            this.idx=idx;
        }
    }
}
