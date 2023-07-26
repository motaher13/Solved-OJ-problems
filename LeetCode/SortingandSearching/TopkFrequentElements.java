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

        
        
        List<Integer>[] countToNumList= new List[nums.length+1];
        for (int num: map.keySet()) {
            int count=map.get(num);
            if(countToNumList[count] == null) {
                countToNumList[count] = new ArrayList<>();
            }
            countToNumList[count].add(num);
        }
        int[] res = new int[k];
        k--;
        for (int i = nums.length; i >=0 && k>=0; i--) {
            if (countToNumList[i]!=null) {
                for (int num: countToNumList[i]) {
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
