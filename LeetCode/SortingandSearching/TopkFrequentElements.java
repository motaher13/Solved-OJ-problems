package LeetCode.SortingandSearching;

import java.util.*;

public class TopkFrequentElements {
    public int[] topKFrequent(int[] nums, int k) {
        HashMap<Integer,Integer> map=new HashMap<>();
        for(int n:nums) map.put(n,map.getOrDefault(n,0)+1);

        PriorityQueue<Integer> q=new PriorityQueue<>((n1,n2)->map.get(n1)-map.get(n2));

        for(int n:map.keySet()){
            q.add(n);
            if(q.size()>k) q.poll();
        }

        int[] top=new int[k];
        for(int i=0;i<k;i++){
            top[i]=q.poll();
        }

        return top;
    }


    public int[] bestForTimeWorstForSpace(int[] nums, int k) {
        HashMap<Integer, Integer> map = new HashMap<>();

        for (int word: nums) {
            map.put(word, map.getOrDefault(word, 0)+1);
        }
        List<Integer>[] list= new List[nums.length+1];
        for (int num: map.keySet()) {
            if(list[map.get(num)] == null) {
                list[map.get(num)] = new ArrayList<>();
            }
            list[map.get(num)].add(num);
        }
        // while(k >=0) {
        int[] res = new int[k];
        k--;
        for (int i = nums.length; i >=0 && k>=0; i--) {
            // System.out.println(list[i]);
            if (list[i]!=null) {
                // System.out.println(list[i]);
                for (int num: list[i]) {
                    // System.out.println(num);
                    res[k--] = num;
                }
            }
        }
        return res;
    }

    public static void main(String[] args) {
        int[] ara={1,1,1,2,2,3};
        int[] out=(new TopkFrequentElements()).topKFrequent(ara,2);
        for(int i:out) System.out.print(i+" ");
    }
}
